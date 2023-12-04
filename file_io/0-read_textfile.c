#include "main.h"
/**
 * read_textfile - read a file and print letters
 * @filename: Name of the file
 * @letters: Number of letters to print
 * Return: Number of printed letters, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t readline, writeline;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	readline = read(file, buffer, letters);
	writeline = write(STDOUT_FILENO, buffer, readline);

	close(file);
	free(buffer);

	return (writeline);
}

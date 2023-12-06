#include "main.h"

/**
 * create_file - Create a file
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: 1 if Success, -1 if Fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int count;
	int read_write;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (count = 0; text_content[count]; count++)
		;

	read_write = write(file, text_content, count);
	if (read_write == -1)
		return (-1);
	close(file);

	return (1);
}

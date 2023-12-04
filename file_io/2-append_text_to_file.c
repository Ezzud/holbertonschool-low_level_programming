#include "main.h"
/**
 * append_text_to_file - Write text on file that
 * already exists
 * @filename: Name of the file
 * @text_content: New content
 * Return: 1 if file exists, -1 if error or not exists
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int count;
	int read_write;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;

		read_write = write(file, text_content, count);
		if (read_write == -1)
			return (-1);
	}
	close(file);

	return (1);
}

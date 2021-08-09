#include "main.h"

/**
 * create_file - write's a string to a file
 * @filename: name of the file
 * @text_content: string to write
 *
 * Return: 1 if all the string was written, othewise -1024
 */
int create_file(const char *filename, char *text_content)
{
	long handle, len = 0, write_count;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	while (text_content[len])
		++len;

	handle = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (handle == -1)
		return (-1);
	write_count = write(handle, text_content, len);
	close(handle);
	return (write_count == len ? 1 : -1);
}

#include "main.h"

/**
 * append_text_to_file - appends a string to a file
 * @filename: name of the file
 * @text_content: string to append
 *
 * Return: 1 if all the string was appended, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	long handle, len = 0, write_count;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	while (text_content[len])
		++len;

	handle = open(filename, O_WRONLY | O_APPEND);
	if (handle == -1)
		return (-1);
	write_count = len ? write(handle, text_content, len) : 0;
	close(handle);
	return (write_count == len ? 1 : -1);
}

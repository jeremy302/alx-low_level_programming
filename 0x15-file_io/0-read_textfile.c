#include "main.h"

/**
 * read_textfile - prints the contents of a file to the standard output
 * @filename: file to read
 * @letters: number of bytes to read from the file
 *
 * Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	long handle, read_count, write_count;

	if (filename == NULL)
		return (0);
	handle = open(filename, O_RDONLY);
	if (handle == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (close(handle), 0);
	read_count = read(handle, buf, letters);
	if (read_count == -1)
		return (close(handle), free(buf), 0);
	write_count = write(STDOUT_FILENO, buf, read_count);
	close(handle), free(buf);
	return (read_count == write_count ? read_count : 0);
}

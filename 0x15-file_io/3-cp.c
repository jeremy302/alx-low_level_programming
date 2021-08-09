#include "main.h"


#define BUFFER_SIZE (1024)

/**
 * main - copies a file from 1 location to another
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 if the file was coppied successfully
 */
int main(int argc, char *argv[])
{
	char buf[BUFFER_SIZE], *src_name, *dst_name;
	int src_handle, dst_handle, read_len, write_len, src_ex, dst_ex,
		src_name_len = 0, dst_name_len = 0;

	if (argc != 3)
		return (dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), 97);
	src_name = argv[1], dst_name = argv[2];
	for (; src_name[src_name_len] == dst_name[dst_name_len] &&
			 src_name[src_name_len] != '\0'; src_name_len++, dst_name_len++)
		if (src_name[src_name_len] == '\0')
			return (0);

	src_handle = open(src_name, O_RDONLY);
	dst_handle = open(dst_name, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (src_handle == -1)
read_error:
		return (dprintf(STDERR_FILENO,
					 "Error: Can't read from file %s\n", src_name), 98);
	if (dst_handle == -1)
write_error:
		return (dprintf(STDERR_FILENO,
					 "Error: Can't write to %s\n", dst_name), 99);
	printf("started\n");
	do {
		read_len = read(src_handle, buf, BUFFER_SIZE);
		if (read_len == -1)
			goto read_error;
		write_len = write(dst_handle, buf, read_len);
		if (write_len != read_len)
			goto write_error;
	} while (read_len);

	src_ex = close(src_handle), dst_ex = close(dst_handle);
	if (src_ex == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_handle);
	if (dst_ex == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dst_handle);
	return (src_ex == -1 || dst_ex == -1 ? 100 : 0);
}

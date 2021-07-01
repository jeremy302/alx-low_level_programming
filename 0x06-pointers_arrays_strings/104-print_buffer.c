#include <stdio.h>
#include "holberton.h"

/**
 * print_buffer - prints a buffer in hex view
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;
	char *b_tmp = b;

	if (size <= 0)
		putchar('\n');
	for (; size > 0; size -= 10, b += 10)
	{
		printf("%08x:", b - b_tmp);
		for (i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				putchar(' ');
			printf(i >= size ? "  " : "%02x", b[i]);
		}
		putchar(' ');
		for (i = 0; i < 10 && i < size; i++)
			putchar(b[i] >= ' ' && b[i] <= '~' ? b[i] : '.');
		putchar('\n');
	}
}

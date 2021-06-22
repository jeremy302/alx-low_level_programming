#include <stdio.h>
#include "holberton.h"

extern char* itoa(int n, char *str, int radix);

/**
 * print_to_98 - prints from n to 98
 * @n: integer to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	for (; n != 98; n += n > 98 ? -1 : 1)
	{
		printf("%d, ", n);
	}
	printf("98\n");
}


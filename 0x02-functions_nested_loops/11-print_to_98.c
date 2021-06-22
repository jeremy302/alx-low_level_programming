#include <stdlib.h>
#include "holberton.h"

void putstr(char *str);

/**
 * print_to_98 - prints from n to 98
 * @n: integer to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	char i_str[20];

	for (; n != 98; n += n > 98 ? -1 : 1)
	{
		itoa(n, i_str, 10);
		putstr(i_str);
		putstr(", ");
	}
	putstr("98\n");
}

/**
 * putstr - writes a char array to stdout till it sees the null terminator: \0
 * @str: Pointer to the first array element
 *
 * Return: void
 */
void putstr(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
}

#include "holberton.h"

/**
 * print_line - prints an underscore: '_', n times
 * @n: the width of the line
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}

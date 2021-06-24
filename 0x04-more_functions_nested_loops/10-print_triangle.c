#include "holberton.h"

/**
 * print_triangle - prints a triangle of height and base: size
 * @size: the height and base of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(j <= (size - i - 2) ? ' ' : '#');
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}

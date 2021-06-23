#include <stdlib.h>
#include "holberton.h"
#include <stdint.h>
#include <stdio.h>

typedef uint64_t uint64;

uint64 fib(int x);
void print_int64(uint64 v);


/**
 * main - starting point of the program
 *
 * Return: 0 if program executed properly, else 1.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		print_uint64(fib(i));
		if (i != 50)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	return (0);
}

/**
 * fib - starting point of the program
 * @x: parameter
 *
 * Return: 0 if program executed properly, else 1.
 */
uint64 fib(int x)
{
	int i;
	uint64 previous = 1, current = 2, accumulated;

	if (x <= 2)
		return (x);
	for (i = 3; i <= x; i++)
	{
		accumulated = previous + current;
		previous = current;
		current = accumulated;
	}
	return (current);
}

/**
 * print_uint64 - prints a 64 bit integer
 * @v: parameter
 *
 * Return: void
 */
void print_uint64(uint64 v)
{
	uint64 divisor = 1000000000;
	uint64 quotient = v;
	char significant_zero = 0;

	divisor = divisor * 10000;
	for (; divisor != 0; divisor /= 10)
	{
		char digit = quotient / divisor;

		if (digit == 0 && !significant_zero)
			continue;
		significant_zero = 1;

		_putchar(digit + '0');
		quotient = quotient % divisor;
	}
}

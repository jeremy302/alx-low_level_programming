#include <stdlib.h>
#include "holberton.h"
#include <stdint.h>
#include <stdio.h>

void putstr(char *str);
int64_t fib(int x);

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
		printf("%ju\n", fib(i));
	}

	return (0);
}

/**
 * fib - starting point of the program
 * @x: parameter
 *
 * Return: 0 if program executed properly, else 1.
 */
int64_t fib(int x)
{
	int i;
	int64_t previous = 1, current = 2, accumulated;

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



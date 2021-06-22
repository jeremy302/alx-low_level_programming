#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

unsigned long long fib(int x);

/**
 * main - starting point of the program
 *
 * Return: 0 if program executed properly, else 1.
 */
int main(void)
{
	long int sum, previous = 1, current = 2, accumulated;

	printf("1\n2\n");
	while (current <= 4000000)
	{

		accumulated = previous + current;
		previous = current;
		current = accumulated;

		if (current % 2 == 0)
		{
			sum += current;
		}

		printf("%ld\n", sum);
	}

	return (0);
}


#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - starting point of the program
 *
 * Return: 0 if program executed properly, else 1.
 */
int main(void)
{
	long int sum = 2, previous = 1, current = 2, accumulated;

	while (current <= 4000000)
	{

		accumulated = previous + current;
		previous = current;
		current = accumulated;

		if (current % 2 == 0)
		{
			sum += current;
		}
	}
	printf("%ld\n", sum);

	return (0);
}


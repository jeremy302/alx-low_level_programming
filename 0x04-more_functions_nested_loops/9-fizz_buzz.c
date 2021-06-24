#include <stdio.h>
#include "holberton.h"

/**
 * main - starting point of the program
 *
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		char fizz = i % 3 == 0;
		char buzz = i % 5 == 0;

		if (i != 1)
			printf(" ");

		if (fizz || buzz)
			printf(fizz && buzz ? "FizzBuzz" : fizz ? "Fizz" : "Buzz");
		else
			printf("%d", i);
	}
	printf("\n");

	return (0);
}

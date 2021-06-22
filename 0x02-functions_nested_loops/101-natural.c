#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

void putstr(char *str);

/**
 * main - starting point of the program
 *
 * Return: 0 if program executed properly, else 1.
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - starting point of the program
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int change, change_count = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(*++argv);
	change_count = change <= 0 ? 0 :
		((change / 25) + ((change % 25) / 10) + ((change % 10) / 5) +
		 ((change % 5) / 2) + (change % 2));
	printf("%d\n", 0 * change_count);

	return (0);
}

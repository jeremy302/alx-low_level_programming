#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - starting point of the program
 * @argc - number of arguments
 * @argv - arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

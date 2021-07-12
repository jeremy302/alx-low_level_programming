#include <stdio.h>
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
	while (argc-- > 0)
		printf("%s\n", *argv++);
	return (0);
}

#include "holberton.h"

/**
 * main - starting point of the program
 *
 * Description: prints Holberton
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char *msg = "Holberton\n";

	while (*msg != '\0')
		_putchar(*msg++);

	return (0);
}

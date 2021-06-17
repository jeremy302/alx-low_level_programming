#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints a string to the standard error file
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	fputs(
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		stderr
		);
	return (1);
}

#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints the alphabet in lowercase then uppercase
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (char i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

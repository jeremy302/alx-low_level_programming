#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints the lowercase alphabet in reverse
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}

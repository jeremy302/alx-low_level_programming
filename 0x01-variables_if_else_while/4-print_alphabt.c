#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints the alphabet in lowercase, except q and e
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');

	return (0);
}

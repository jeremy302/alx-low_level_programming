#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints 0 to 9 without using char data type and only putchar
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

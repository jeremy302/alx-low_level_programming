#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints all hexadecimal digits
 * Return: 0 if program executes properly, else a non-zero numbers
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

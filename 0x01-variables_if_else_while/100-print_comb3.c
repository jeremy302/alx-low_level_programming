#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints all unique double-digit combinations
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{

	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				if (!(i == '0' && j == '1'))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
			}
		}

	}
	putchar('\n');

	return (0);
}

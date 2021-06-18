#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints all unique triple-digit combinations
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (k > j && j > i)
				{
					if (!(i == '0' && j == '1' && k == '2'))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
					putchar(k);
				}
			}
		}

	}
	putchar('\n');

	return (0);
}

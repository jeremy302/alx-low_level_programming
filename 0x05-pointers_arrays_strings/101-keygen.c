#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a password
 *
 * Return: 0
 */
int main(void)
{
	char choice, candidates[] =
		"abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ-.";
	int i, random_number, sum = 2772;

	srand(time(NULL));
	for (i = 0; sum > 200; i++)
	{
		random_number = (rand() + 1) % sizeof(candidates);
		choice = candidates[random_number];
		putchar(choice);
		sum -= choice;
	}

	if (sum > 122)
	{
	    putchar(sum / 2);
		putchar((sum / 2) + (sum % 2));
	}
	else
		putchar(sum);
	return (0);
}

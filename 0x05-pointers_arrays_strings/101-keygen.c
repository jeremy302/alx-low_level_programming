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
	int i, rand_num, sum = 2772;

	srand(time(NULL));
	for (i = 0; sum > 200; i++)
	{
		rand_num = rand() % (sizeof(candidates) - 1);
		choice = candidates[rand_num];
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

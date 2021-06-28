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
	char choice, password[100], candidates[] =
		"abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ-.";
	int i, random_number, sum = 2772;

	srand(time(NULL));
	for (i = 0; sum > 200; i++)
	{
		random_number = (rand() + 1) % sizeof(candidates);
		choice = candidates[random_number];
		password[i] = choice;
		sum -= choice;
	}

	if (sum > 122)
	{
		password[i++] = sum / 2;
		password[i++] = sum % 2 ? sum / 2 + 1 : sum / 2;
	}
	else
		password[i++] = sum;
	password[i++] = '\n';
	password[i] = '\0';
	printf("%s", password);

	return (0);
}

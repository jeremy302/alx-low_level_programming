#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a variable number of bytes starting from where `main` is at
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int len, i = 0;

	if (argc != 2)
		return (printf("Error\n"), 1);
	len = atoi(argv[1]);
	if (len < 0)
		return (printf("Error\n"), 2);
	for (i = 0; i < len; i++)
	{
		printf((i == len - 1 ? "%02x" : "%02x "),
			   *(((unsigned char *)(unsigned long)&main) + i));
	}
	printf("\n");
	return (0);
}

#include "holberton.h"

/**
 * _atoi - converts s to an integer
 * @s: string to convert
 *
 * Return: s as an int
 */
int _atoi(char *s)
{
	int num = 0;
	char negative = 0;
	char allow_any = 1;

	while (*s != '\0' && (allow_any || (*s >= '0' && *s <= '9')))
	{
		if (*s >= '0' && *s <= '9')
		{
			allow_any = 0;
			num = num * 10 + (negative ? -(*s - '0') : (*s - '0'));
		}
		else if (*s == '-')
			negative = !negative;
		s++;
	}

	return (num);
}

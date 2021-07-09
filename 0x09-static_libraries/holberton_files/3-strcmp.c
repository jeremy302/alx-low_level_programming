#include "holberton.h"

/**
 * _strcmp - compares s1 with s2
 * @s1: a string
 * @s2: a string
 *
 * Return: difference of the first non-matching character pair
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2 && !(diff = *s1++ - *s2++))
		continue;

	return (diff);
}

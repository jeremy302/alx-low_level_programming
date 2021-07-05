#include "holberton.h"

/**
 * _strpbrk - returns a pointer to the first of any byte of accept in s
 * @s: array to search
 * @accept: bytes to look for
 *
 * Return: pointer to the first character found, or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	char index[256] = {0};

	while (*accept)
		index[(int)*accept++] = 1;
	while (*s && !index[(int)*s])
		++s;
	return (*s ? s : 0);
}

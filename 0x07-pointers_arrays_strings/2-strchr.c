#include "holberton.h"

/**
 * _strchr - returns a sub-array, starting from the first occurrence
 * @s: array to search
 * @c: byte to search for
 *
 * Return: an array starting with c, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (*s || c == 0 ? s : 0);
}

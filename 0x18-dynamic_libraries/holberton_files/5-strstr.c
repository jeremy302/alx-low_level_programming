#include "holberton.h"

/**
 * _strstr - returns a pointer to where needle occurs in haystack
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: a pointer to needle in haystack, or NULL if it isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_tmp = haystack, *needle_tmp = needle;

	for (; *haystack; haystack = ++haystack_tmp, needle = needle_tmp)
	{
		while (*needle && *haystack && *needle == *haystack)
			needle++, haystack++;
		if (!*needle)
			return (haystack_tmp);
	}
	return (0);
}

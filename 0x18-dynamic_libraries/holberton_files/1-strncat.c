#include "holberton.h"

/**
 * _strncat - concats src to dest
 * @dest: array to start with
 * @src: array to copy from
 * @n: max bytes to copy
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_tmp = dest;

	while (*dest)
		++dest;
	while (n-- && (*dest = *src++))
		++dest;
	if (n == -1)
		*dest = '\0';

	return (dest_tmp);
}

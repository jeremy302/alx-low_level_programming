#include "holberton.h"

/**
 * _strncpy - copies  src to dest
 * @dest: array to overwrite
 * @src: array to copy from
 * @n: max bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_tmp = dest;

	while (n && (*dest++ = *src++))
		--n;
	while (n-- > 0)
		*dest++ = 0;
	if (n == -1 && *(dest - 1) != '\0')
		*dest = '\0';

	return (dest_tmp);
}

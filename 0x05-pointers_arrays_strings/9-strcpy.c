#include "holberton.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: array to copy to
 * @src: array to copy from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	register char *dest_tmp = dest;

	while ((*dest_tmp++ = *src++))
		continue;
	*dest_tmp = '\0';

	return (dest);
}

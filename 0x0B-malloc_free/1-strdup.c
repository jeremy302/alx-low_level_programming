#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - creates of copy of str
 * @str: string to copy
 *
 * Return: a new string
 */
char *_strdup(char *str)
{
	int len = 1;
	char *str_ptr = NULL;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	str_ptr = malloc(sizeof(char) * ++len);
	if (str_ptr != NULL)
		while (len--)
			str_ptr[len] = str[len];
	return (str_ptr);
}

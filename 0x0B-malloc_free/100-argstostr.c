#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concats all strings in av
 * @ac: length of av
 * @av: strings to concat
 *
 * Return: a string
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j;
	char *str = NULL, *str_tmp = NULL;

	if (!ac || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, ++len)
		for (j = 0; av[i][j]; j++)
			++len;

	str = malloc(sizeof(char) * (len + 1)), str_tmp = str;
	if (str != NULL)
	{
		for (i = 0; i < ac; i++, (*str++ = '\n'))
			for (j = 0; av[i][j]; j++)
				*str++ = av[i][j];
		*str = '\0';
	}
	return (str_tmp);
}

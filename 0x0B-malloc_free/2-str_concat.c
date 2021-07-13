#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concats s2 to s1 in a new string
 * @s1: a string
 * @s2: a string
 *
 * Return: a new string made up of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int len_1 = 0, len_2 = 0;
	char *str = NULL, *str_tmp = NULL;

	s1 = s1 != NULL ? s1 : "", s2 = s2 != NULL ? s2 : "";
	while (s1[len_1])
		len_1++;
	while (s2[len_2])
		len_2++;
	str = malloc(sizeof(char) * (len_1 + len_2) + 1), str_tmp = str;
	if (str != NULL)
	{
		while (*s1 || *s2)
			*str++ = *s1 ? *s1++ : *s2++;
		*str = '\0';
	}
	return (str_tmp);
}

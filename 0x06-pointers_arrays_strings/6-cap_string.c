#include "holberton.h"

/**
 * cap_string - makes the first letter of each word uppercase
 * @s: string to capitalize
 *
 * Return: s
 */
char *cap_string(char *s)
{
	char *s_tmp = s, new_word = 1;

	for ( ; *s != '\0'; s++)
	{
		if (new_word && *s >= 'a' && *s <= 'z')
		{
			*s = *s - ('a' - 'A');
			new_word = 0;
		}
		else
			new_word = (*s < 'A' || *s > 'Z') &&
				(*s == ' ' || *s == '\t' || *s == '\n' ||
				 *s == ',' || *s == ';' || *s == '.' || *s == '!' ||
				 *s == '?' || *s == '"' || *s == '(' || *s == ')' ||
				 *s == '{' || *s == '}');
	}
	return (s_tmp);
}

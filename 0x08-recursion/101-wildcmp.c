#include "holberton.h"

/**
 * wildcmp - checks if s1 and s2 are similar, using any '*' in s as a wild card
 * @s1: a string
 * @s2: a string, possibly containing '*' wild card
 *
 * Return: 1 if s1 and s2 match, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (wildcmp(s1 + 1, s2 + 2));
		else
			return (wildcmp(s1 + 1, s2));
	}
	else if (!*s2)
		return (*s1 != '\0');
	else
		return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
}

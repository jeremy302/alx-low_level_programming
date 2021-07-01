#include "holberton.h"

/**
 * rot13 - encodes s into rot13
 * @s: string to encode
 *
 * Return: s
 */
char *rot13(char *s)
{
	char *s_tmp = s, anchor;

	for (; *s; s++)
	{
		anchor = (*s >= 'A' && *s <= 'Z') * 'A' + (*s >= 'a' && *s <= 'z') * 'a';
		if (anchor)
			*s = (((*s - anchor) + 13) % 26) + anchor;
	}
	return (s_tmp);
}

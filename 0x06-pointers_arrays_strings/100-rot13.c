#include "holberton.h"

/**
 * rot13 - encodes s into rot13
 * @s: string to encode
 *
 * Return: s
 */
char *rot13(char *s)
{
	char *s_tmp = s,
		mapping[256] = { ['A' ... 'Z'] = 'A', ['a' ... 'z'] = 'a' };

	for (; *s; s++)
		if (mapping[*s])
			*s = (((*s - mapping[*s]) + 13) % 26) + mapping[*s];
	return (s_tmp);
}

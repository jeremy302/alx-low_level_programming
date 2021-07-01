#include "holberton.h"

/**
 * leet - encodes s into 1337
 * @s: string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	char *s_tmp = s,
		map, mapping[256] = { ['A'] = '4', ['a'] = '4', ['E'] = '3',
		['e'] = '3', ['O'] = '0', ['o'] = '0', ['T'] = '7',
		['t'] = '7', ['L'] = '1', ['l'] = '1' };

	for (; *s; s++)
		*s = mappings[*s] ? mappings[*s] : *s;

	return (s_tmp);
}

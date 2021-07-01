#include "holberton.h"

/**
 * leet - encodes s into 1337
 * @s: string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	char *s_tmp = s, htable[256], *map = "A4a4E3e3O0o0T7t7L1l1";

	for (; *map; map += 2)
		htable[(int)*map] = map[1];

	for (; *s; s++)
		*s = htable[(int)*s] ? htable[(int)*s] : *s;

	return (s_tmp);
}

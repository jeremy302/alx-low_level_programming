#include "holberton.h"

/**
 * set_string - sets s as a pointer to `to`
 * @s: pointer to a string
 * @to: string to be pointed to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

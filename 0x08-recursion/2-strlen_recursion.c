#include "holberton.h"

/**
 * _strlen_recursion - returns the length of s
 * @s: the string to count
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);
}

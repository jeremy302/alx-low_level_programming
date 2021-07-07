#include "holberton.h"

/*
 * _puts_recursion - prints a string
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_put_rec(s+1);
}
else
_putchar('\n');
}

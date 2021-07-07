#include "holberton.h"

/**
 * _pow_recursion - calculates x raised to the power of y
 * @x: integer base
 * @y: integer index
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	return (y < 0 ? -1 : !y ? 1 : x * _pow_recursion(x, y - 1));
}

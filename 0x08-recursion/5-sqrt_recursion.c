#include "holberton.h"

/**
 * root_check - finds the natural root of y, starting from x
 * @x: the number to start checking from
 * @y: a perfect square
 *
 * Return: x if it is the root of y
 */
int root_check(int x, int y)
{
	int product = x * x;

	return (product == y  ? x : product > y ? -1 : root_check(x + 1, y));
}

/**
 * _sqrt_recursion - calculates the natural root of n
 * @n: a perfect square
 *
 * Return: the root of n
 */
int _sqrt_recursion(int n)
{
	return (root_check(0, n));
}

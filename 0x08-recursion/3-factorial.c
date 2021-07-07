#include "holberton.h"

/**
 * factorial - calculates the factorial of n
 * @n: an integer
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	return (n < 0 ? -1 : !n ? 1 : n * factorial(n - 1));
}

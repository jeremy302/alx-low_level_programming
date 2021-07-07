#include "holberton.h"

/**
 * prime_check - checks for any factor of y, starting from x
 * @x: number to start checking from
 * @y: number to check
 *
 * Return: 1 if y is a prime number, else 0
 */
char prime_check(int x, int y)
{
	return (x > y / 2 ? 1 : y % x && prime_check(x + 1, y));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: an integer
 *
 * Return: 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (n < 2 ? 0 : prime_check(2, n));
}

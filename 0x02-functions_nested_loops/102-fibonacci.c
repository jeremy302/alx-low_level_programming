#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

void putstr(char *str);
unsigned long long fib(int x);

int main(void)
{
	char fib_str[20];

	for (int i = 0; i <= 50; i++)
	{
		uint64_to_str(fib(i), fib_str);
		putstr(fib_str);
		putstr("\n");
	}

	return (0);
}

unsigned long long fib(int x)
{
	int i;
	unsigned long long previous = 1, current = 2, accumulated;

	if (x <= 2)
		return x;
	for (i = 3; i <= x; i++)
	{
		accumulated = previous + current;
		previous = current;
		current = accumulated;
	}
	return current;
}

/**
 * putstr - writes a char array to stdout till it sees the null terminator: \0
 * @str: Pointer to the first array element
 *
 * Return: void
 */
void putstr(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
}

void uint64_to_str(long long v, char* str)
{
	if (v < 0)
	{
		v = 0 - v;
		*(str++) = '-';
	}
	int base = 10;
	unsigned long long divisor = base;
	while (v / divisor)
		divisor *= base;
	printf("divisor: %d\n", divisor);
	while (divisor != base)
	{
		long long a=(v / (divisor /= 10));
		printf("a:%d\n",a);
		*str++ =  a+ '0';
	}
}

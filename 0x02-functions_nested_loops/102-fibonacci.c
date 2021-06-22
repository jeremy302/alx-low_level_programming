#include <stdlib.h>
#include "holberton.h"
#include <stdint.h>
#include <stdio.h>

void putstr(char *str);
int64_t fib(int x);

int main(void)
{
	char fib_str[20];

	for (int i = 1; i <= 50; i++)
	{
		printf("%llu\n", fib(i));
	}

	return (0);
}

int64_t fib(int x)
{
	int i;
	int64_t previous = 1, current = 2, accumulated;

	if (x <= 2)
		return (x);
	for (i = 3; i <= x; i++)
	{
		accumulated = previous + current;
		previous = current;
		current = accumulated;
	}
	return (current);
}



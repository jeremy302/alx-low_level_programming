#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all it's arguments, separated by `separator`
 * @separator: string to separate arguments with
 * @n: arguments count
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i++ < n)
		printf("%i%s", va_arg(args, int),
			   i != n && separator != NULL ? separator : "");
	printf("\n");
	va_end(args);
}

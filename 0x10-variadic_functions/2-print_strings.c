#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints all it's arguments, separated by `separator`
 * @separator: string to separate arguments with
 * @n: arguments count
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);
	while (i++ < n)
	{
		str = va_arg(args, char *);
		printf("%s%s", str == NULL ? "(nil)" : str,
			   i != n && separator != NULL ? separator : "");
	}
	printf("\n");
	va_end(args);
}

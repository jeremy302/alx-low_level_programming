#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
			   i == n ? "\n" : separator == NULL ? "" : separator);
	}
	va_end(args);
}

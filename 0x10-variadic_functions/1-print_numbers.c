#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i++ < n)
		printf("%d%s", va_arg(args, int),
			   i == n ? "\n" : separator == NULL ? "" : separator);
	va_end(args);
}

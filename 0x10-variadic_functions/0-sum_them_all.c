#include "variadic_functions.h"
#include "stdarg.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	va_start(args, n);
	while (i++ < n)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}

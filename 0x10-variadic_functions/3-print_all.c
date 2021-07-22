#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format[i])
	{
		switch (format[i]) {
		case 'c': 
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s", str == NULL ? "(nil)" : str);
			break;
		default:
			if (format[++i] == '\0')
				printf("\b\b\n");
			continue;
		}
		if (format[++i] == '\0')
			printf("\n");
		else
			printf(", ");
	}
	va_end(args);
}

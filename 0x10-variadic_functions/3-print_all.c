#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all it's argument b the given format
 * @format: type of corresponding argument
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
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
				printf("\b\b");
			continue;
		}
		if (format[++i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

#include "function_pointers.h"

/**
 * print_name - prints a name with the provided function
 * @name: the name to print
 * @f: function to use for printing
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

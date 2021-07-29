#include "lists.h"
#include <stdio.h>

/**
 * constructor - prints a string before `main` is called
 *
 * Return: void
 */
void __attribute__((constructor)) constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}


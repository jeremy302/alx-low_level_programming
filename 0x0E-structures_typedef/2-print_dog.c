#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog's name, age and owner
 * @d: dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name = d == NULL || d->name == NULL ? "(nil)" : d->name;
	char *owner = d == NULL || d->owner == NULL ? "(nil)" : d->owner;

	if (d != NULL)
		printf("%s\n%f\n%s\n", name, d->age, owner);
}

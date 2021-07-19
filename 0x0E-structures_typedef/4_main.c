#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

	char *name = "kkdkdm";
    my_dog = new_dog(name, 235, "kmmk");
	/*name[1] = 'k';*/
    printf("My name is |%s| (|%s|%s|), and I am %.1f :) - Woof!\n", my_dog->name, name, my_dog->owner, my_dog->age);
	free(my_dog);
    return (0);
}

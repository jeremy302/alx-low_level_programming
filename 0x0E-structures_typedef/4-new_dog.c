#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0, dog_size = sizeof(dog_t);
	char *name_, *owner_;
	dog_t *dog;

	dog = malloc(dog_size);
	while (name[name_len] || owner[owner_len])
		name_len += !!name[name_len], owner_len += !!owner[owner_len];
	name_ = malloc(name_len + 1);
	owner_ = malloc(owner_len + 1);
	if (name_ == NULL || owner_ == NULL || dog == NULL)
		return (free(name_), free(owner_), free(dog), NULL);
	dog->age = age, dog->name = name_, dog->owner = owner_;
	while (*name)
		*name_++ = *name++;
	while (*owner)
		*owner_++ = *owner++;
	*name_ = '\0';
	*owner_ = '\0';
	return (dog);
}


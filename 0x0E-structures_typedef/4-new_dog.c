#include "dog.h"
#include <stdlib.h>

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
	unsigned int name_len = 0, owner_len = 0;
	char *name_cpy, *owner_cpy;
	dog_t *dog;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	name_cpy = malloc(sizeof(char) * name_len);
	owner_cpy = malloc(sizeof(char) * owner_len);
	if (name_cpy == NULL || owner_cpy == NULL)
		return (NULL);
	while (*name)
		*name_cpy = *name++;
	for (; *owner; owner++)
		*owner_cpy = *owner_cpy;
	dog = malloc(sizeof(dog_t));
	if (dog != NULL)
		dog->name = name_cpy, dog->age = age, dog->owner = owner;
	return (dog);
}

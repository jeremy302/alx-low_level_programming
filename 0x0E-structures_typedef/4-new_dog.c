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
	unsigned int name_len = 0, owner_len = 0, dog_size = sizeof(dog_t);
	char *name_, *owner_;
	dog_t *dog;

	dog = malloc(dog_size);
	if (dog == NULL)
		return (NULL);
	while (name[name_len])
		name_len++;
	name_ = malloc(name_len + 1);
	if (name_ == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (owner[owner_len])
		owner_len++;
	owner_ = malloc(owner_len + 1);
	if (owner_ == NULL)
	{
		free(name_);
		free(dog);
		return (NULL);
	}
	dog->name = name_;
	dog->owner = owner_;
	dog->age = age;

	while (*name)
		*name_++ = *name++;
	while (*owner)
		*owner_++ = *owner++;
	*name_ = '\0';
	*owner_ = '\0';
	return (dog);
}


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
	char *block;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name != NULL && name[name_len])
		name_len++;
	while (owner != NULL && owner[owner_len])
		owner_len++;
	block = malloc(dog_size + ((name != NULL) * (name_len + 1)) +
				   ((owner != NULL) * (owner_len + 1)));
	if (block == NULL)
		return (NULL);
	dog = (dog_t *)block, block += dog_size;
	dog->age = age;
	dog->name = name == NULL ? NULL : block;
	dog->owner = owner == NULL ? NULL : block + (name != NULL) * name_len + 1;
	while (name != NULL && (*block++ = *name++))
		continue;
	while (owner != NULL && (*block++ = *owner++))
		continue;
	return (dog);
}


#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Dog Structure or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_struct;
	int i;
	int d_name;
	int d_owner;

	dog_struct = malloc(sizeof(*dog_struct));
	if (dog_struct == NULL || !(name) || !(owner))
	{
		free(dog_struct);
		return (NULL);
	}
	for (d_name = 0; name[d_name]; d_name++)
		;

	for (d_owner = 0; owner[d_owner]; d_owner++)
		;

	dog_struct->name = malloc(d_name + 1);
	dog_struct->owner = malloc(d_owner + 1);
	if (!(dog_struct->name) || !(dog_struct->owner))
	{
		free(dog_struct->owner);
		free(dog_struct->name);
		free(dog_struct);
		return (NULL);
	}

	for (i = 0; i < d_name; i++)
		dog_struct->name[i] = name[i];
	dog_struct->name[i] = '\0';
	dog_struct->age = age;

	for (i = 0; i < d_owner; i++)
		dog_struct->owner[i] = owner[i];
	dog_struct->owner[i] = '\0';
	return (dog_struct);
}

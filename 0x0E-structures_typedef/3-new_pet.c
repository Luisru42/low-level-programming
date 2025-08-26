#include <stdio.h>
#include <stdlib.h>
#include "pet.h"

/**
 * new_pet - creates a new pet
 * @name: name of the pet
 * @age: age of the pet
 * @owner: owner of the pet
 *
 * Return: pointer to the new pet, or NULL on failure
 */
pet_t *new_pet(char *name, float age, char *owner)
{
	pet_t *pet;

	pet = malloc(sizeof(pet_t));
	if (pet == NULL)
		return (NULL);

	pet->name = strdup(name);
	if (pet->name == NULL)
	{
		free(pet);
		return (NULL);
	}

	pet->age = age;

	pet->owner = strdup(owner);
	if (pet->owner == NULL)
	{
		free(pet->name);
		free(pet);
		return (NULL);
	}

	return (pet);
}
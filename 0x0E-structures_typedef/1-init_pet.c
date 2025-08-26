#include <stdio.h>
#include <stdlib.h>
#include "pet.h"

/**
 * init_pet - Initializes a pet structure
 * @d: Pointer to the pet structure
 * @name: Name of the pet
 * @age: Age of the pet
 * @owner: Owner of the pet
 *
 * Description: This function initializes a pet structure with the
 * provided name, age, and owner.
 */
void init_pet(struct pet *p, char *name, float age, char *owner)
{
    if (p != NULL)
    {
        p->name = name;
        p->age = age;
        p->owner = owner;
    }
}

#include <stdio.h>
#include "pet.h"

/**
 * print_pet - Prints the details of a pet
 * @p: Pointer to the pet structure
 *
 * Description: This function prints the details of a pet
 * including its name, age, and owner.
 */
void print_pet(struct pet *p)
{
    if (p != NULL)
    {
        printf("Name: %s\n", p->name);
        printf("Age: %.2f\n", p->age);
        printf("Owner: %s\n", p->owner);
    }
}

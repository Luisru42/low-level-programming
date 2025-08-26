#ifndef PET_H
#define PET_H

/**
 * struct dog - Dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A structure to hold information about a pet.
 */
struct pet
{
    char *name;
    float age;
    char *owner;
};

typedef struct pet pet_t;

/* Function prototypes */
void init_pet(struct pet *p, char *name, float age, char *owner);
void print_pet(struct pet *p);
pet_t *new_pet(char *name, float age, char *owner);
void free_pet(pet_t *p);

#endif /* PET_H */
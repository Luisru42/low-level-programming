#include <stdio.h>
#include "pet.h"

int main(void) {
    struct pet my_pet;
    init_pet(&my_pet, "Fido", 4.0f, "Alice");
    printf("Name: %s, Age: %.1f, Owner: %s\n",
           my_pet.name, my_pet.age, my_pet.owner);
    return 0;
}

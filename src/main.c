#include <stdio.h>
#include "c_sap/pets.h"

int main() {

    /* Prints all tier 1 Turtle pack pets */
    printf("\nTurtle Pack Tier 1:\n");
    for (int i = 0; i < PET_COUNT; i++) {
        if (pet_data[i].tier == 1 && !pet_data[i].is_token && (pet_data[i].pack & PACK_TURTLE)) {
            printf("  %-12s %d/%d\n",
                pet_data[i].name,
                pet_data[i].base_attack,
                pet_data[i].base_health);
        }
    }

    return 0;
}

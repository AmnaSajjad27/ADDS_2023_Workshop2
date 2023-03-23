#include "ArtificialPet.h"
#include <iostream>

ArtificialPet::ArtificialPet() {
    fullnessLvl = 0;
}

int ArtificialPet::getFullness() {
    return fullnessLvl;
}

bool ArtificialPet::isHungry() {
    if (fullnessLvl < 0) return true;
    return false;
}

void ArtificialPet::feed() {
    if (fullnessLvl >= 10) {
        fullnessLvl = 10;
        return;
    }

    int increase = (10 - fullnessLvl) /2 + 1;
    fullnessLvl += increase;
}
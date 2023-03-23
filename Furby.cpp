#include "Furby.h"

Furby::Furby() {}

void Furby::dance(int minutes) {
    int decrease = minutes * 3;
    fullnessLvl -= decrease;
}

void Furby::play(int minutes) {
    int decrease = minutes * 2;
    fullnessLvl -= decrease;
}
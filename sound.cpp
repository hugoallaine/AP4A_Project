#include "sound.hpp"

int Sound::getValue() const {
    return this->valSense;
}

int Sound::aleaGenVal() {
    int rand = std::rand() % 120; // Valeur entre 0 et 120 dB
    return rand;
}
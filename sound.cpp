#include "sound.hpp"

int Sound::aleaGenVal() {
    srand(time(NULL));
    int rand = std::rand() % 120; // Valeur entre 0 et 120 dB
    return rand;
}
#include "sound.hpp"

int Sound::getValue() const {
    return this->valSense;
}

int Sound::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 120); // Valeur entre 0 et 120 dB
    int rand = dis(gen);
    return rand;
}
#include "temperature.hpp"

float Temperature::aleaGenVal() {
    srand(time(NULL));
    float rand = std::rand() % 30 + 5.0; // Valeur entre 5 et 35 degrés (valeurs plus réaliste pour une maison) 
    return rand;
}
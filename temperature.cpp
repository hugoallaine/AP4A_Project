#include "temperature.hpp"

float Temperature::getValue() const {
    return this->valSense;
}

float Temperature::aleaGenVal() {
    float rand = std::rand() % 30 + 5; // Valeur entre 5 et 35 degrés (valeurs plus réaliste pour une maison) 
    return rand;
}
#include "temperature.hpp"

float Temperature::getValue() const {
    return this->valSense;
}

float Temperature::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dis(5.0, 35.0); // Valeur entre 5 et 35 degrés (valeurs plus réaliste pour une maison) 
    float rand = dis(gen);
    return rand;
}
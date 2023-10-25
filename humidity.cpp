#include "humidity.hpp"

float Humidity::getValue() const {
    return this->valSense;
}

float Humidity::aleaGenVal() {
    float rand = std::rand() % 100; // Valeur entre 0 et 100% d'humidité
    return rand;
}
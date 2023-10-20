#include "humidity.hpp"

float Humidity::aleaGenVal() {
    float rand = std::rand() % 100; // Valeur entre 0 et 100% d'humidité
    return rand;
}
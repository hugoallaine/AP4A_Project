#include "humidity.hpp"

float Humidity::getValue() const {
    return this->valSense;
}

float Humidity::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dis(0.0, 100.0); // Valeur entre 0 et 100% d'humidité
    float rand = dis(gen); 
    return rand;
}
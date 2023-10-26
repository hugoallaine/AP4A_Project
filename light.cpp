#include "light.hpp"

bool Light::getValue() const {
    return this->valSense;
}

bool Light::aleaGenVal() {
    bool rand = std::rand() % 2; // Eteint ou allumé
    return rand;
}
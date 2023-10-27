#include "light.hpp"

bool Light::getValue() const {
    return this->valSense;
}

bool Light::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 1); // Eteint ou allumé
    bool rand = dis(gen); 
    return rand;
}
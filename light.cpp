#include "light.hpp"

bool Light::aleaGenVal() {
    bool rand = std::rand() % 1; // Eteint ou allumé
    return rand;
}
#include "light.hpp"

bool Light::aleaGenVal() {
    srand(time(NULL));
    bool rand = std::rand() % 1; // Eteint ou allumé
    return rand;
}
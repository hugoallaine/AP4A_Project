#include "light.hpp"

/**
 * @brief Get the value of the sensor
 * @return valSense
 */
bool Light::getValue() const {
    return this->valSense;
}

/**
 * @brief Generate a random value for the sensor
 * @return the random value
 */
void Light::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 1); // on or off
    bool rand = dis(gen); 
    this->valSense = rand;
}
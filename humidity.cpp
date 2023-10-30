#include "humidity.hpp"

/**
 * @brief Get the value of the sensor
 * @return valSense
 */
float Humidity::getValue() const {
    return this->valSense;
}

/**
 * @brief Generate a random value for the sensor
 * @return the random value
 */
void Humidity::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dis(0.0, 100.0); // Values between 0 and 100 for humidity
    float rand = dis(gen); 
    this->valSense = rand;
}
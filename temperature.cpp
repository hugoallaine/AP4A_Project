#include "temperature.hpp"

/**
 * @brief Get the value of the sensor
 * @return valSense
 */
float Temperature::getValue() const {
    return this->valSense;
}

/**
 * @brief Generate a random value for the sensor
 * @return the random value
 */
void Temperature::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dis(5.0, 35.0); // 5 to 35 °C
    float rand = dis(gen);
    this->valSense = rand;
}
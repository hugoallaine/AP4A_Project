#include "sound.hpp"

/**
 * @brief Get the value of the sensor
 * @return valSense
 */
int Sound::getValue() const {
    return this->valSense;
}

/**
 * @brief Generate a random value for the sensor
 * @return the random value
 */
void Sound::aleaGenVal() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(10, 120); // 10 to 120 dB
    int rand = dis(gen);
    this->valSense = rand;
}
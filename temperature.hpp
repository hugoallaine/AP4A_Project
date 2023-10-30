#ifndef TEMPERATURE_HPP
#define TEMPERATURE_HPP

#include "sensor.hpp"

/**
 * @brief Temperature sensor class
 * @details This class is used to simulate a temperature sensor
 */
class Temperature : public Sensor<float> {
    public:

        /**
         * @brief Construct a new Temperature object
         * @details This constructor is used to build a temperature sensor
         *          with random values
         */
        Temperature() {
            std::cout << "Building temperature sensor..." << std::endl;
            aleaGenVal();
        };

        /**
         * @brief Construct a new Temperature object
         * @details This constructor is used to build a temperature sensor
         *          with given values
         * @param valSense the value of the sensor
         */
        Temperature(float valSense) : Sensor<float>(valSense) {};

        /**
         * @brief Construct a new Temperature object
         * @details This constructor is used to build a temperature sensor
         *          with another temperature sensor
         * @param temperature a temperature sensor
         */
        Temperature(const Temperature &temperature) : Sensor<float>(temperature) {};

        /**
         * @brief Destroy the Temperature object
         * @details This destructor is used to destroy a temperature sensor
         */
        ~Temperature() {};

        /**
         * @brief Get the value of the sensor
         * @return valSense
         */
        float getValue() const;

        /**
         * @brief Generate a random value for the sensor
         * @return the random value
         */
        void aleaGenVal();
};

#endif // TEMPERATURE_HPP
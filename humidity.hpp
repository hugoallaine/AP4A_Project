#ifndef HUMIDITY_HPP
#define HUMIDITY_HPP

#include "sensor.hpp"

/**
 * @brief Humidity sensor class
 * @details This class is used to simulate a humidity sensor
 */
class Humidity : public Sensor<float> {
    public:
    
        /**
         * @brief Construct a new Humidity object
         * @details This constructor is used to build a humidity sensor
         *          with random values
         */
        Humidity() {
            std::cout << "Building humidity sensor..." << std::endl;
            aleaGenVal();
        };

        /**
         * @brief Construct a new Humidity object
         * @details This constructor is used to build a humidity sensor
         *          with given values
         * @param valSense the value of the sensor
         */
        Humidity(float valSense) : Sensor<float>(valSense) {};

        /**
         * @brief Construct a new Humidity object
         * @details This constructor is used to build a humidity sensor
         *          with another humidity sensor
         * @param humidity a humidity sensor
         */
        Humidity(const Humidity &humidity) : Sensor<float>(humidity) {};

        /**
         * @brief Destroy the Humidity object
         * @details This destructor is used to destroy a humidity sensor
         */
        ~Humidity() {};

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

#endif // HUMIDITY_HPP
#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "sensor.hpp"

/**
 * @brief Light sensor class
 * @details This class is used to simulate a light sensor
 */
class Light : public Sensor<bool> {
    public:

        /**
         * @brief Construct a new Light object
         * @details This constructor is used to build a light sensor
         *          with random values
         */
        Light() {
            std::cout << "Building light sensor..." << std::endl;
            aleaGenVal();
        };

        /**
         * @brief Construct a new Light object
         * @details This constructor is used to build a light sensor
         *          with given values
         * @param valSense the value of the sensor
         */
        Light(bool valSense) : Sensor<bool>(valSense) {};

        /**
         * @brief Construct a new Light object
         * @details This constructor is used to build a light sensor
         *          with another light sensor
         * @param light a light sensor
         */
        Light(const Light &light) : Sensor<bool>(light) {};

        /**
         * @brief Destroy the Light object
         * @details This destructor is used to destroy a light sensor
         */
        ~Light() {};

        /**
         * @brief Get the value of the sensor
         * @return valSense
         */
        bool getValue() const;

        /**
         * @brief Generate a random value for the sensor
         * @return the random value
         */
        void aleaGenVal();
};

#endif // LIGHT_HPP
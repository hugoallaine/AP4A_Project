#ifndef SOUND_HPP
#define SOUND_HPP

#include "sensor.hpp"

/**
 * @brief Sound sensor class
 * @details This class is used to simulate a sound sensor
 */
class Sound : public Sensor<int> {
    public:

        /**
         * @brief Construct a new Sound object
         * @details This constructor is used to build a sound sensor
         *          with random values
         */
        Sound() {
            std::cout << "Building sound sensor..." << std::endl;
            aleaGenVal();
        };

        /**
         * @brief Construct a new Sound object
         * @details This constructor is used to build a sound sensor
         *          with given values
         * @param valSense the value of the sensor
         */
        Sound(int valSense) : Sensor<int>(valSense) {};

        /**
         * @brief Construct a new Sound object
         * @details This constructor is used to build a sound sensor
         *          with another sound sensor
         * @param sound a sound sensor
         */
        Sound(const Sound &sound) : Sensor<int>(sound) {};

        /**
         * @brief Destroy the Sound object
         * @details This destructor is used to destroy a sound sensor
         */
        ~Sound() {};

        /**
         * @brief Get the value of the sensor
         * @return valSense
         */
        int getValue() const;
        
        /**
         * @brief Generate a random value for the sensor
         * @return the random value
         */
        void aleaGenVal();
};

#endif // SOUND_HPP
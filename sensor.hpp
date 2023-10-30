#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <iostream>
#include <random>

using namespace std;

/**
 * @brief Generic sensor class
 * @details This template class is used to simulate a sensor
 * @tparam T the type of the sensor
 */
template<typename T>
class Sensor {
    protected:
        T valSense;

    public:
        
        /**
         * @brief Construct a new Sensor object
         * @details This constructor is used to build a sensor
         *          with a random value
         */
        Sensor() {
            aleaGenVal();
        }

        /**
         * @brief Construct a new Sensor object
         * @details This constructor is used to build a sensor
         *          with a given value
         * @param valSense the value of the sensor
         */
        Sensor(T valSense) {
            this->valSense = valSense;
        }

        /**
         * @brief Construct a new Sensor object
         * @details This constructor is used to build a sensor
         *          with another sensor
         * @param sensor a sensor
         */
        Sensor(const Sensor &sensor) {
            this->valSense = sensor.valSense;
        }

        /**
         * @brief Destroy the Sensor object
         */
        ~Sensor() {
            std::cout << "Sensor destroyed." << std::endl;
        }

        /**
         * @brief Get the value of the sensor
         * @return valSense
         */
        T getValue() {
            return this->valSense;
        }

        /**
         * @brief Generate a random value for the sensor
         * @return the random value
         */
        void aleaGenVal() {
            T rand = std::rand();
            this->valSense = rand;
        }
};

#endif // SENSOR_HPP
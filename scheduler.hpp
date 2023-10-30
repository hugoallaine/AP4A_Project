#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP

#include <iostream>
#include <thread>
#include <chrono>
#include "server.hpp"
#include "temperature.hpp"
#include "humidity.hpp"
#include "sound.hpp"
#include "light.hpp"

using namespace std;

/**
 * @brief Scheduler class
 * @details This class is used to control the sensors and the server
 *          for the simulation
 */
class Scheduler {
    private:
        Temperature temp_sensor;
        Humidity hum_sensor;
        Sound sound_sensor;
        Light light_sensor;
        Server *server;

    public:
    
        /**
         * @brief Construct a new Scheduler object
         * @param consol 
         * @param log 
         */
        Scheduler(bool consol, bool log);

        /**
         * @brief Destroy the Scheduler object
         */
        ~Scheduler();

        /**
         * @brief Transmitter
         * @details This method is used to transmit the sensor's value to the server
         * @param sensor the sensor
         */
        template<typename T>
        void transmitter(T &sensor);

        /**
         * @brief StartSensor
         * @details This method is used to start a sensor
         * @tparam sensor the sensor
         * @param sleep_time the time between each sensor's value
         */
        template <typename T>
        void StartSensor(T &sensor, int sleep_time);

        /**
         * @brief StartActivity
         * @details This method is used to start the sensors
         */
        void StartActivity();
};

#endif // SCHEDULER_HPP
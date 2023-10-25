#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP

#include <iostream>
#include "server.hpp"
#include "temperature.hpp"
#include "humidity.hpp"
#include "sound.hpp"
#include "light.hpp"

using namespace std;

class Scheduler {
    private:
        Server server;
        Temperature temp_sensor;
        Humidity hum_sensor;
        Sound sound_sensor;
        Light light_sensor;
    public:
        // Constructeurs
        Scheduler(); // Constructeur par défaut
        Scheduler(bool consol, bool log); // Constructeur par arguments
        ~Scheduler(); // Destructeur

        // METHODES
        template<typename T>
        void transmitter(T &sensor); // Transmetteur
        void program(); // Programme principal
};

#endif // SCHEDULER_HPP
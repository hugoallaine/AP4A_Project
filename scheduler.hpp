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
    public:
        // Constructeurs
        Scheduler(bool consol, bool log); // Constructeur par arguments
        ~Scheduler(); // Destructeur

        // METHODES
        template<typename T>
        void transmitter(T &sensor, Server &server); // Transmetteur
};

#endif // SCHEDULER_HPP
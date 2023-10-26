#ifndef SOUND_HPP
#define SOUND_HPP

#include "sensor.hpp"

class Sound : public Sensor<int> {
    public:
        Sound() {
            std::cout << "Construction du capteur de son" << std::endl;
            this->valSense = aleaGenVal();
        };
        Sound(int valSense) : Sensor<int>(valSense) {};
        Sound(const Sound &sound) : Sensor<int>(sound) {};
        ~Sound() {};
        int getValue() const;
        int aleaGenVal();
};

#endif // SOUND_HPP
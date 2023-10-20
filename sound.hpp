#ifndef SOUND_HPP
#define SOUND_HPP

#include "sensor.hpp"

class Sound : public Sensor<int> {
    private:
        int valSense;
    public:
        Sound() : Sensor<int>() {};
        Sound(int valSense) : Sensor<int>(valSense) {};
        Sound(const Sound &sound) : Sensor<int>(sound) {};
        ~Sound() {};

        int aleaGenVal();
};

#endif // SOUND_HPP
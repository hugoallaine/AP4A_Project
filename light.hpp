#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "sensor.hpp"

class Light : public Sensor<bool> {
    private:
        bool valSense;
    public:
        Light() : Sensor<bool>() {};
        Light(bool valSense) : Sensor<bool>(valSense) {};
        Light(const Light &light) : Sensor<bool>(light) {};
        ~Light() {};
        bool getValue() const;
        bool aleaGenVal();
};

#endif // LIGHT_HPP
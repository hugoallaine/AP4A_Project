#ifndef TEMPERATURE_HPP
#define TEMPERATURE_HPP

#include "sensor.hpp"

class Temperature : public Sensor<float> {
    private:
        float valSense;
    public:
        Temperature() : Sensor<float>() {};
        Temperature(float valSense) : Sensor<float>(valSense) {};
        Temperature(const Temperature &temperature) : Sensor<float>(temperature) {};
        ~Temperature() {};
        float getValue() const;
        float aleaGenVal();
};

#endif // TEMPERATURE_HPP
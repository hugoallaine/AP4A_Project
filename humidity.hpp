#include "sensor.hpp"

class Humidity : public Sensor<float> {
    private:
        float valSense;
    public:
        Humidity() : Sensor<float>() {};
        Humidity(float valSense) : Sensor<float>(valSense) {};
        Humidity(const Humidity &humidity) : Sensor<float>(humidity) {};
        ~Humidity() {};

        float aleaGenVal();
};
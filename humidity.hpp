#ifndef HUMIDITY_HPP
#define HUMIDITY_HPP

#include "sensor.hpp"

class Humidity : public Sensor<float> {
    public:
        Humidity() {
            std::cout << "Construction du capteur d'humidité" << std::endl;
            this->valSense = aleaGenVal();
        };
        Humidity(float valSense) : Sensor<float>(valSense) {};
        Humidity(const Humidity &humidity) : Sensor<float>(humidity) {};
        ~Humidity() {};
        float getValue() const;
        float aleaGenVal();
};

#endif // HUMIDITY_HPP
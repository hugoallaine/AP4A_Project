#include "sensor.hpp"

using namespace std; // Espace de nommage standard

// Constructeurs
Sensor::Sensor() {
    std::cout << "Construction du capteur" << std::endl;
    this->sensor_name = "None";
    this->valSense = 0;
}

// Constructeur par arguments
Sensor::Sensor(std::string sensor_name, float valSense) {
    std::cout << "Construction du capteur" << std::endl;
    this->sensor_name = sensor_name;
    this->valSense = valSense;
}

// Constructeur par recopie
Sensor::Sensor(const Sensor &sensor) {
    std::cout << "Construction par recopie du capteur" << std::endl;
    this->sensor_name = sensor.sensor_name;
    this->valSense = sensor.valSense;
}

// Destructeur
Sensor::~Sensor() {
    std::cout << "Destruction du capteur" << std::endl;
}

std::string Sensor::getName() {
    return this->sensor_name;
}

int Sensor::getValue() {
    return this->valSense;
}

int Sensor::sendData() {
    return this->valSense;
}

int Sensor::aleaGenVal() {
    srand(time(0));
    int rand = std::rand();
    return rand;
}
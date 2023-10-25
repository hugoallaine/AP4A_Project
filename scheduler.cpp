#include "scheduler.hpp"

// Constructeur

Scheduler::Scheduler() {
    std::cout << "Construction du scheduler" << std::endl;
    srand(time(NULL));
    this->server = Server();
    this->temp_sensor = Temperature();
    this->hum_sensor = Humidity();
    this->sound_sensor = Sound();
    this->light_sensor = Light();
    program();
}

Scheduler::Scheduler(bool consol, bool log) {
    std::cout << "Construction du scheduler" << std::endl;
    srand(time(NULL));
    this->server = Server(consol,log);
    this->temp_sensor = Temperature();
    this->hum_sensor = Humidity();
    this->sound_sensor = Sound();
    this->light_sensor = Light();
    program();
}

// Destructeur
Scheduler::~Scheduler() {
    std::cout << "Destruction du scheduler" << std::endl;
}

// Transmetteur
template<typename T>
void Scheduler::transmitter(T &sensor) {
    this->server << sensor;
}

// Programme principal
void Scheduler::program() {
    std::cout << "Programme principal" << std::endl;
    std::cout << "Valeur de la température : " << temp_sensor.getValue() << std::endl;
    std::cout << "Valeur de l'humidité : " << hum_sensor.getValue() << std::endl;
    std::cout << "Valeur du son : " << sound_sensor.getValue() << std::endl;
    std::cout << "Valeur de la lumière : " << light_sensor.getValue() << std::endl;
    transmitter(temp_sensor);
    transmitter(hum_sensor);
    transmitter(sound_sensor);
    transmitter(light_sensor);
    std::cout << "Fin du programme principal" << std::endl;
}
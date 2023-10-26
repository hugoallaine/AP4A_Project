#include "scheduler.hpp"

// Constructeur

Scheduler::Scheduler(bool consol, bool log) {
    std::cout << "Scheduler started." << std::endl;
    srand(time(NULL));
    Server server(consol,log);
    Temperature temp_sensor;
    Humidity hum_sensor;
    Sound sound_sensor;
    Light light_sensor;
    std::cout << "Starting program..." << std::endl;
    std::cout << "Valeur de la température : " << temp_sensor.getValue() << std::endl;
    std::cout << "Valeur de l'humidité : " << hum_sensor.getValue() << std::endl;
    std::cout << "Valeur du son : " << sound_sensor.getValue() << std::endl;
    std::cout << "Valeur de la lumière : " << light_sensor.getValue() << std::endl;
    transmitter(temp_sensor, server);
    transmitter(hum_sensor, server);
    transmitter(sound_sensor, server);
    transmitter(light_sensor, server);
    std::cout << "Ending program..." << std::endl;
}

// Destructeur
Scheduler::~Scheduler() {
    std::cout << "Scheduler closed." << std::endl;
}

// Transmetteur
template<typename T>
void Scheduler::transmitter(T &sensor,Server &server) {
    server << sensor;
}
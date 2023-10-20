#include "sensor.hpp"

using namespace std; // Espace de nommage standard

// Constructeurs
Sensor::Sensor() {
    std::cout << "Construction du capteur" << std::endl;
    this->valSense = aleaGenVal();
}

// Constructeur par arguments
Sensor::Sensor(float valSense) {
    std::cout << "Construction du capteur" << std::endl;
    this->valSense = valSense;
}

// Constructeur par recopie
Sensor::Sensor(const Sensor &sensor) {
    std::cout << "Construction par recopie du capteur" << std::endl;
    this->valSense = sensor.valSense;
}

// Destructeur
Sensor::~Sensor() {
    std::cout << "Destruction du capteur" << std::endl;
}

// Récupération de la valeur du capteur
int Sensor::getValue() {
    return this->valSense;
}

// Envoi des données au serveur
int Sensor::sendData() {
    return this->valSense;
}

// Génération aléatoire de la valeur du capteur
int Sensor::aleaGenVal() {
    srand(time(NULL));
    int rand = std::rand() % 35 + 5;
    return rand;
}
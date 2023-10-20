#include "sensor.hpp"

// Constructeurs
template<typename T>
Sensor<T>::Sensor() {
    std::cout << "Construction du capteur" << std::endl;
    this->valSense = aleaGenVal();
}

// Constructeur par arguments
template<typename T>
Sensor<T>::Sensor(T valSense) {
    std::cout << "Construction du capteur" << std::endl;
    this->valSense = valSense;
}

// Constructeur par recopie
template<typename T>
Sensor<T>::Sensor(const Sensor &sensor) {
    std::cout << "Construction par recopie du capteur" << std::endl;
    this->valSense = sensor.valSense;
}

// Destructeur
template<typename T>
Sensor<T>::~Sensor() {
    std::cout << "Destruction du capteur" << std::endl;
}

// Récupération de la valeur du capteur
template<typename T>
T Sensor<T>::getValue() {
    return this->valSense;
}

// Envoi des données au serveur
template<typename T>
T Sensor<T>::sendData() {
    return this->valSense;
}

// Génération aléatoire de la valeur du capteur
template<typename T>
T Sensor<T>::aleaGenVal() {
    return rand() % 100;
}
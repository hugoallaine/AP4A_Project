#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <iostream> // Entrée sortie standard
#include <cstdlib>  // Génération de nombre aléatoire

using namespace std; // Espace de nommage standard

template<typename T>
class Sensor {
    private:
        T valSense;
    public:
        // Constructeurs 
        Sensor() {
            std::cout << "Construction du capteur" << std::endl;
            this->valSense = aleaGenVal();
        }

        // Constructeur par arguments
        Sensor(T valSense) {
            std::cout << "Construction du capteur" << std::endl;
            this->valSense = valSense;
        }

        // Constructeur par recopie
        Sensor(const Sensor &sensor) {
            std::cout << "Construction par recopie du capteur" << std::endl;
            this->valSense = sensor.valSense;
        }

        // Destructeur
        ~Sensor() {
            std::cout << "Destruction du capteur" << std::endl;
        }

        // Récupération de la valeur du capteur
        T getValue() {
            return this->valSense;
        }

        // Génération aléatoire de la valeur du capteur
        T aleaGenVal() {
            return rand() % 100;
        }
};

#endif // SENSOR_HPP
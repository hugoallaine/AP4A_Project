#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <iostream> // Entrée sortie standard
#include <cstdlib>  // Génération de nombre aléatoire

using namespace std; // Espace de nommage standard

template<typename T>
class Sensor {
    protected:
        T valSense;
    public:
        // Constructeurs 
        Sensor() {
            this->valSense = aleaGenVal();
        }

        // Constructeur par arguments
        Sensor(T valSense) {
            this->valSense = valSense;
        }

        // Constructeur par recopie
        Sensor(const Sensor &sensor) {
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
            return 0;
        }
};

#endif // SENSOR_HPP
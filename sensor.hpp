#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <iostream> // Entrée sortie standard
#include <string>  // Lecture et écriture dans un fichier
#include <cstdlib> // Génération de nombre aléatoire

using namespace std; // Espace de nommage standard

template<typename T>
class Sensor {
    private:
        T valSense;

    public:
        Sensor(); // Constructeur
        Sensor(T valSense); // Constructeur par arguments
        Sensor(const Sensor &sensor); // Constructeur par recopie
        ~Sensor(); // Destructeur
        
        // METHODES
        T getValue(); // Récupération de la valeur du capteur
        T sendData(); // Envoi des données au serveur
        T aleaGenVal(); // Génération aléatoire de la valeur du capteur
};

#endif // SENSOR_HPP
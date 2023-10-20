#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <iostream> // Entrée sortie standard
#include <string>  // Lecture et écriture dans un fichier
#include <cstdlib> // Génération de nombre aléatoire

using namespace std; // Espace de nommage standard

class Sensor {
    private:
        int valSense;

    public:
        Sensor(); // Constructeur
        Sensor(float valSense); // Constructeur par arguments
        Sensor(const Sensor &sensor); // Constructeur par recopie
        ~Sensor(); // Destructeur
        
        // METHODES
        int getValue(); // Récupération de la valeur du capteur
        int sendData(); // Envoi des données au serveur
        int aleaGenVal(); // Génération aléatoire de la valeur du capteur
};

#endif // SENSOR_HPP
#ifndef SENSOR_HPP
#define SENSOR_HPP

#include <iostream> // Entrée sortie standard
#include <string>  // Lecture et écriture dans un fichier
#include <cstdlib> // Génération de nombre aléatoire

using namespace std; // Espace de nommage standard

class Sensor {
    private:
        std::string sensor_name;
        int valSense;

    public:
        Sensor(); // Constructeur
        Sensor(std::string sensor_name, float valSense); // Constructeur par arguments
        Sensor(const Sensor &sensor); // Constructeur par recopie
        ~Sensor(); // Destructeur
        
        // METHODES
        std::string getName(); // Récupération du nom du capteur
        int getValue(); // Récupération de la valeur du capteur
        int sendData(); // Envoi des données au serveur
        int aleaGenVal(); // Génération aléatoire de la valeur du capteur
};

#endif // SENSOR_HPP
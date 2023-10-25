#ifndef SERVER_HPP
#define SERVER_HPP

#include <iostream> // Entrée sortie standard
#include <fstream>  // Lecture et écriture dans un fichier
#include <type_traits> // std::is_same

#include "sensor.hpp"
#include "temperature.hpp"
#include "humidity.hpp"
#include "sound.hpp"
#include "light.hpp"

using namespace std; // Espace de nommage standard

class Server {
    private:
        bool consolActivation;
        bool logActivation;

    public:
        Server(); // Constructeur
        Server(const Server &server); // Constructeur par recopie
        Server(bool consolActivation, bool logActivation); // Constructeur par arguments
        ~Server(); // Destructeur

        // SURCHARGES OPERATEURS
        void operator=(const Server &server); // Opérateur d'affectation
        //friend std::ostream& operator<<(std::ostream&, Server&, std::string nom_capteur, int dataSens); // Opérateur de flux de sortie
        template<typename T>
        void operator<<(const T &sensor); // Opérateur de flux de sortie

        // METHODES
    private:
        template<typename T>
        void consoleWrite(std::string nom_capteur, T dataSens); // Ecriture dans la console
        template<typename T>
        void fileWrite(std::string nom_capteur, T dataSens); // Ecriture dans un fichier log
};

// Surcharge de l'opérateur de flux de sortie
template<typename T>
void Server::operator<<(const T &sensor) {
    std::string nom_capteur;
    if (std::is_same<T, Temperature>::value) {
        nom_capteur = "Temperature";
    } else if (std::is_same<T, Humidity>::value) {
        nom_capteur = "Humidity";
    } else if (std::is_same<T, Sound>::value) {
        nom_capteur = "Sound";
    } else if (std::is_same<T, Light>::value) {
        nom_capteur = "Light";
    } else {
        nom_capteur = "Unknown";
    }
    consoleWrite(nom_capteur, sensor.getValue());
    fileWrite(nom_capteur, sensor.getValue());
}

// Ecriture dans la console
template<typename T>
void Server::consoleWrite(std::string nom_capteur, T dataSens) {
    if(this->consolActivation == 1) {
        std::cout << "Le capteur " << nom_capteur << " retourne la valeur : " << dataSens << std::endl; // Affichage dans la console de la donnée du capteur 
    }  
}

// Ecriture dans un fichier log
template<typename T>
void Server::fileWrite(std::string nom_capteur, T dataSens) {
    if(this->logActivation == 1) {
        std::string nom_fichier = "log_"+nom_capteur+".txt"; // Concatenation pour le nom du fichier log spécifique au capteur
        std::ofstream LogFile(nom_fichier, ios::app); // Ouverture du fichier en mode ajout
        LogFile << "Le capteur " << nom_capteur << " retourne la valeur : " << dataSens << std::endl; // Ajout de l'information
        LogFile.close(); // Fermeture du fichier
    }
}

#endif // SERVER_HPP
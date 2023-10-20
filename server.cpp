#include "server.hpp"

// Constructeur
Server::Server() {
    std::cout << "Construction du serveur" << std::endl;
    this->nbrOfSensors = 0;
    this->consolActivation = 0;
    this->logActivation = 0;
}

// Constructeur par recopie
Server::Server(const Server &server) {
    std::cout << "Construction par recopie du serveur" << std::endl;
    this->nbrOfSensors = server.nbrOfSensors;
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}

// Constructeur par arguments
Server::Server(int nbrOfSensors, bool consolActivation, bool logActivation) {
    std::cout << "Construction par arguments du serveur" << std::endl;
    this->nbrOfSensors = nbrOfSensors;
    this->consolActivation = consolActivation;
    this->logActivation = logActivation;
}

// Destructeur
Server::~Server() {
    std::cout << "Destruction du serveur" << std::endl;
}

// Opérateur d'affectation
void Server::operator=(const Server &server) {
    std::cout << "Affectation du serveur" << std::endl;
    this->nbrOfSensors = server.nbrOfSensors;
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}

// Surcharge de l'opérateur de flux de sortie
template<typename T>
Server& Server::operator<<(const T &sensor) {
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
    return *this;
}

// Réception des données du capteur
void Server::dataRcv(std::string nom_capteur, int dataSens) {
    consoleWrite(nom_capteur, dataSens); // Affichage dans la console de la donnée du capteur
    fileWrite(nom_capteur, dataSens); // Ecriture dans le fichier log
}

// Ecriture dans la console
void Server::consoleWrite(std::string nom_capteur, int dataSens) {
    if(this->consolActivation == 1) {
        std::cout << "Le capteur " << nom_capteur << " retourne la valeur : " << dataSens << std::endl; // Affichage dans la console de la donnée du capteur 
    }  
}

// Ecriture dans un fichier log
void Server::fileWrite(std::string nom_capteur, int dataSens) {
    if(this->logActivation == 1) {
        std::string nom_fichier = "log_"+nom_capteur+".txt"; // Concatenation pour le nom du fichier log spécifique au capteur
        std::ofstream LogFile(nom_fichier, ios::app); // Ouverture du fichier en mode ajout
        LogFile << "Le capteur " << nom_capteur << " retourne la valeur : " << dataSens << std::endl; // Ajout de l'information
        LogFile.close(); // Fermeture du fichier
    }
}


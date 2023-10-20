#ifndef SERVER_HPP
#define SERVER_HPP

#include <iostream> // Entrée sortie standard
#include <fstream>  // Lecture et écriture dans un fichier

using namespace std; // Espace de nommage standard

class Server {
    private:
        int nbrOfSensors;
        bool consolActivation;
        bool logActivation;

    public:
        Server(); // Constructeur
        Server(const Server &server); // Constructeur par recopie
        Server(int nbrOfSensors, bool consolActivation, bool logActivation); // Constructeur par arguments
        ~Server(); // Destructeur

        // SURCHARGES OPERATEURS
        void operator=(const Server &server); // Opérateur d'affectation
        friend std::ostream& operator<<(std::ostream&, Server&, std::string nom_capteur, int dataSens); // Opérateur de flux de sortie

        // METHODES
        void dataRcv(std::string nom_capteur, int dataSens); // Reception des données du capteur
    private:
        void consoleWrite(std::string nom_capteur, int dataSens); // Ecriture dans la console
        void fileWrite(std::string nom_capteur, int dataSens); // Ecriture dans un fichier log
};

#endif // SERVER_HPP
#include "server.hpp"

// Constructeur
Server::Server() {
    std::cout << "Construction du serveur" << std::endl;
    this->consolActivation = false;
    this->logActivation = false;
}

// Constructeur par recopie
Server::Server(const Server &server) {
    std::cout << "Construction par recopie du serveur" << std::endl;
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}

// Constructeur par arguments
Server::Server(bool consolActivation, bool logActivation) {
    std::cout << "Construction par arguments du serveur" << std::endl;
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
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}
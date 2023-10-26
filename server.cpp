#include "server.hpp"

// Constructeur
Server::Server() {
    this->consolActivation = false;
    this->logActivation = false;
}

// Constructeur par recopie
Server::Server(const Server &server) {
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}

// Constructeur par arguments
Server::Server(bool consolActivation, bool logActivation) {
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
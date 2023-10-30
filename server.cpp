#include "server.hpp"

Server::Server() {
    std::cout << "Building server..." << std::endl;
    this->consolActivation = false;
    this->logActivation = false;
}

Server::Server(const Server &server) {
    std::cout << "Building server..." << std::endl;
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}

Server::Server(bool consolActivation, bool logActivation) {
    std::cout << "Building server..." << std::endl;
    this->consolActivation = consolActivation;
    this->logActivation = logActivation;
}

Server::~Server() {
    std::cout << "Server destroyed." << std::endl;
};

void Server::operator=(const Server &server) {
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}
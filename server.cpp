#include "server.hpp"

/**
 * @brief Construct a new Server object
 * @details This constructor is used to build a server
 *          with default values
 */
Server::Server() {
    std::cout << "Building server..." << std::endl;
    this->consolActivation = false;
    this->logActivation = false;
}

/**
 * @brief Construct a new Server object
 * @details This constructor is used to build a server
 *          with another server
 * @param server a server
 */
Server::Server(const Server &server) {
    std::cout << "Building server..." << std::endl;
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}

/**
 * @brief Construct a new Server object
 * @details This constructor is used to build a server
 *          with given values
 * @param consolActivation a boolean to activate the console
 * @param logActivation a boolean to activate the log
 */
Server::Server(bool consolActivation, bool logActivation) {
    std::cout << "Building server..." << std::endl;
    this->consolActivation = consolActivation;
    this->logActivation = logActivation;
}

/**
 * @brief Destroy the Server object
 * @details This destructor is used to destroy a server
 */
Server::~Server() {
    std::cout << "Server destroyed." << std::endl;
};

/**
 * @brief Overload of the = operator
 * @details This operator is used to copy a server
 * @param server a server to copy
 */
void Server::operator=(const Server &server) {
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}
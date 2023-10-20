#include <iostream>
#include <cstdlib>
#include <ctime>
//#include "server.hpp"

/*
Consigne de rendu
3 parties dans le rapport :
- texte
- code
- screen de l'exécution du code
*/

int main() {
    /*
    std::cout << "Starting program" << std::endl;
    Server server;
    server.sensorCommunication("Temperature", 21.5);
    server.consoleWrite();
    server.fileWrite();
    server.sensorCommunication("Humidite", 50);
    std::cout << server << std::endl;
    std::cout << "Ending program" << std::endl;
    */

    srand(time(0));
    int rand = std::rand();
 
    std::cout << rand << std::endl;

    return 0;
}
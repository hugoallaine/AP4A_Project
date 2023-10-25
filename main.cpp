#include "scheduler.hpp"

/*
Consigne de rendu
3 parties dans le rapport :
- texte
- code
- screen de l'exécution du code
*/

int main(int argc, char** argv) {
    std::cout << "Starting program" << std::endl;
    if(argc == 3) {
        Scheduler(argv[1], argv[2]);
    } else {
        Scheduler();
    }
    std::cout << "Ending program" << std::endl;
    
    return 0;
}
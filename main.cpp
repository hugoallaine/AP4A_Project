#include "scheduler.hpp"

/*
Consigne de rendu
3 parties dans le rapport :
- texte
- code
- screen de l'exécution du code
*/

int main(int argc, char** argv) {
    if(argc == 3) {
        Scheduler(argv[1], argv[2]);
    } else {
        Scheduler(false,false);
    }
    
    return 0;
}
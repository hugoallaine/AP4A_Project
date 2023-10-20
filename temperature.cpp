#include "sensor.hpp"

class Temperature : public Sensor {
    public:
        // Génération aléatoire de la valeur du capteur
        int aleaGenVal() override {
            srand(time(NULL));
            int rand = std::rand() % 30 + 5; // Valeur entre 5 et 35 degrés (valeurs plus réaliste pour une maison) 
            return rand;
        }
};
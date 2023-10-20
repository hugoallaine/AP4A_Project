#include "sensor.hpp"

class Light : public Sensor {
    public:
        // Génération aléatoire de la valeur du capteur
        int aleaGenVal() override {
            srand(time(NULL));
            int rand = std::rand() % 500; // Valeur entre 0 et 500 lux
            return rand;
        }
};
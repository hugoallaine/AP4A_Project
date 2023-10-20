#include "sensor.hpp"

class Sound : public Sensor {
    public:
        // Génération aléatoire de la valeur du capteur
        int aleaGenVal() override {
            srand(time(NULL));
            int rand = std::rand() % 120; // Valeur entre 0 et 120 dB
            return rand;
        }
};
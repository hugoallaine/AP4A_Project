#include "sensor.hpp"

class Humidity : public Sensor {
    public:
        // Génération aléatoire de la valeur du capteur
        int aleaGenVal() override {
            srand(time(NULL));
            int rand = std::rand() % 100; // Valeur entre 0 et 100% d'humidité
            return rand;
        }
};
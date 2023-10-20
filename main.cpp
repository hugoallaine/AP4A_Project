#include "server.hpp"
#include "sensor.hpp"
#include "temperature.hpp"
#include "humidity.hpp"
#include "sound.hpp"
#include "light.hpp"

/*
Consigne de rendu
3 parties dans le rapport :
- texte
- code
- screen de l'exécution du code
*/

int main() {
    std::cout << "Starting program" << std::endl;
    srand(time(NULL));
    // Définition
    Server server;
    Temperature temp_sensor;
    Humidity hum_sensor;
    Sound sound_sensor;
    Light light_sensor;
    
    std::cout << temp_sensor.getValue() << std::endl;
    std::cout << hum_sensor.getValue() << std::endl;
    std::cout << sound_sensor.getValue() << std::endl;
    std::cout << light_sensor.getValue() << std::endl;

    std::cout << "Ending program" << std::endl;
    
    return 0;
}
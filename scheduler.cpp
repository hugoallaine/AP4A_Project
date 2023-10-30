#include "scheduler.hpp"

#define TEMP_TIMER 1000
#define LIGHT_TIMER 2000
#define HUM_TIMER 3000
#define SOUND_TIMER 4000

/**
 * @brief Construct a new Scheduler object
 * @param consol
 * @param log
 */
Scheduler::Scheduler(bool consol, bool log) {
    srand(time(NULL));
    this->server = new Server(consol,log);
    StartActivity();
    std::cout << "Scheduler started.\n" << std::endl;
}

/**
 * @brief Destroy the Scheduler object
 */
Scheduler::~Scheduler() {
    delete this->server;
    std::cout << "Scheduler stopped." << std::endl;
}

/**
 * @brief Transmitter
 * @details This method is used to transmit the sensor's value to the server
 * @param sensor the sensor
 * @param server the server
 */
template<typename T>
void Scheduler::transmitter(T &sensor) {
    *this->server << sensor;
}

/**
 * @brief StartSensor
 * @details This method is used to start a sensor
 * @tparam sensor the sensor
 * @param sleep_time the time between each sensor's value
 */
template <typename T>
void Scheduler::StartSensor(T &sensor, int sleep_time) {
    std::thread([this, &sensor, sleep_time]() {
        while (true) {
            sensor.aleaGenVal();
            transmitter(sensor);
            std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time));
        }
    }).detach();
}

/**
 * @brief StartActivity
 * @details This method is used to start the sensors
 */
void Scheduler::StartActivity() {
    StartSensor(this->temp_sensor, TEMP_TIMER);
    StartSensor(this->hum_sensor, HUM_TIMER);
    StartSensor(this->sound_sensor, SOUND_TIMER);
    StartSensor(this->light_sensor, LIGHT_TIMER);
}
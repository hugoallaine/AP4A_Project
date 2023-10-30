#ifndef SERVER_HPP
#define SERVER_HPP

#include <iostream>
#include <fstream>
#include <type_traits>

#include "sensor.hpp"
#include "temperature.hpp"
#include "humidity.hpp"
#include "sound.hpp"
#include "light.hpp"

using namespace std;

/**
 * @brief Server class
 * @details This class is used to simulate a server
 */
class Server {
    private:
        bool consolActivation;
        bool logActivation;

    public:

        /**
         * @brief Construct a new Server object
         * @details This constructor is used to build a server
         *          with default values
         */
        Server();

        /**
         * @brief Construct a new Server object
         * @details This constructor is used to build a server
         *          with another server
         * @param server a server
         */
        Server(const Server &server);

        /**
         * @brief Construct a new Server object
         * @details This constructor is used to build a server
         *          with given values
         * @param consolActivation a boolean to activate the console
         * @param logActivation a boolean to activate the log
         */
        Server(bool consolActivation, bool logActivation);

        /**
         * @brief Destroy the Server object
         * @details This destructor is used to destroy a server
         */
        ~Server();

        /**
         * @brief Overload of the = operator
         * @details This operator is used to copy a server
         * @param server a server to copy
         */
        void operator=(const Server &server);

        /**
         * @brief Overload of the << operator
         * @details This operator is used to write the value of a sensor
         *          in the console and/or in a file
         * @param sensor a sensor
         */
        template<typename T>
        void operator<<(const T &sensor);

    private:

        /**
         * @brief Write the value of a sensor in the console
         * @details This method is activated if consolActivation is true
         * @param sensor_name the name of the sensor
         * @param dataSens the value of the sensor
         */
        template<typename T>
        void consoleWrite(std::string sensor_name, T dataSens);

        /**
         * @brief Write the value of a sensor in a file
         * @details This method is activated if logActivation is true
         * @param sensor_name the name of the sensor
         * @param dataSens the value of the sensor
         */
        template<typename T>
        void fileWrite(std::string sensor_name, T dataSens);
};

/**
 * @brief Overload of the << operator
 * @details This operator is used to write the value of a sensor
 *          in the console and/or in a file
 * @param sensor a sensor
 */
template<typename T>
void Server::operator<<(const T &sensor) {
    std::string sensor_name;
    if (std::is_same<T, Temperature>::value) {
        sensor_name = "Temperature";
    } else if (std::is_same<T, Humidity>::value) {
        sensor_name = "Humidity";
    } else if (std::is_same<T, Sound>::value) {
        sensor_name = "Sound";
    } else if (std::is_same<T, Light>::value) {
        sensor_name = "Light";
    } else {
        sensor_name = "Unknown";
    }
    consoleWrite(sensor_name, sensor.getValue());
    fileWrite(sensor_name, sensor.getValue());
}

/**
 * @brief Write the value of a sensor in the console
 * @details This method is activated if consolActivation is true
 * @param sensor_name the name of the sensor
 * @param dataSens the value of the sensor
 */
template<typename T>
void Server::consoleWrite(std::string sensor_name, T dataSens) {
    if(this->consolActivation == 1) {
        std::cout << "The " << sensor_name << " sensor returns : " << dataSens << std::endl;
    }  
}

/**
 * @brief Write the value of a sensor in a file
 * @details This method is activated if logActivation is true
 * @param sensor_name the name of the sensor
 * @param dataSens the value of the sensor
 */
template<typename T>
void Server::fileWrite(std::string sensor_name, T dataSens) {
    if(this->logActivation == 1) {
        std::string filename = "log_"+sensor_name+".txt";
        std::ofstream LogFile(filename, ios::app);
        LogFile << "The " << sensor_name << " sensor returns : " << dataSens << std::endl;
        LogFile.close();
    }
}

#endif // SERVER_HPP
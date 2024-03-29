#include "scheduler.hpp"
#include <csignal>

bool on = true; // Global variable to stop the program

/**
 * @brief Signal handler
 * @details This function is used to stop the program when the user press CTRL+C
 * @param signum 
 */
void signalHandler(int signum) {
    std::cout << "\nStopping program..." << std::endl;
    on = false;
}

/**
 * @brief Main function
 * @param argc number of arguments
 * @param argv arguments
 * @return 0 if the program is stopped correctly
 */
int main(int argc, char** argv) {
    signal(SIGINT, signalHandler);
    bool consoleActivation = false;
    bool logActivation = false;
    std::string arg;
    for (int i = 1; i < argc; i++) {
        arg = argv[i];
        if (arg == "-l" || arg == "--log") {
            logActivation = true;
        } else if (arg == "-c" || arg == "--console") {
            consoleActivation = true;
        } else if (arg == "-v" || arg == "--version") {
            std::cout << "AP4A Project - v1.0" << std::endl;
            std::cout << "Compilation date : " << __DATE__ << " " << __TIME__ << std::endl;
            return 0;
        } else if (arg == "-h" || arg == "--help") {
            std::cout << "Usage : " << argv[0] << " [options]\n\n"
                << "Options : -h, --help      Print this help manual.\n"
                << "          -v, --version   Print program's version and compilation date.\n"
                << "          -l, --log       Turn on writing on log file.\n"
                << "          -c, --console   Turn on console writing." << std::endl;
            return 0;
        }
    }
    Scheduler* scheduler = new Scheduler(consoleActivation, logActivation);
    while(on) {};
    delete scheduler;
    return 0;
}
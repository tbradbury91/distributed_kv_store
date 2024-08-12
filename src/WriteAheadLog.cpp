#include "WriteAheadLog.h"
#include <fstream>
#include <iostream>

WriteAheadLog::WriteAheadLog(const std::string& filename) : filename(filename) {}

void WriteAheadLog::log(const std::string& entry) {
    std::ofstream log_file(filename, std::ios_base::app);
    if (log_file.is_open()) {
        log_file << entry << std::endl;
    } else {
        std::cerr << "Failed to open log file." << std::endl;
    }
}

void WriteAheadLog::replay() {
    std::ifstream log_file(filename);
    std::string line;
    while (std::getline(log_file, line)) {
        // Replay logic here
    }
}

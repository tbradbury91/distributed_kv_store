#ifndef WRITE_AHEAD_LOG_H
#define WRITE_AHEAD_LOG_H

#include <fstream>
#include <string>

class WriteAheadLog {
public:
    WriteAheadLog(const std::string& filename);
    void log(const std::string& entry);
    void replay();

private:
    std::string filename;
};

#endif // WRITE_AHEAD_LOG_H

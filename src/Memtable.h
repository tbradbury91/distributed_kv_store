#ifndef MEMTABLE_H
#define MEMTABLE_H

#include <unordered_map>
#include <string>
#include <mutex>

class Memtable {
public:
    void put(const std::string& key, const std::string& value);
    std::string get(const std::string& key) const;
    void remove(const std::string& key);

private:
    std::unordered_map<std::string, std::string> store;
    mutable std::mutex mtx;  // Mutex for thread safety
};

#endif // MEMTABLE_H

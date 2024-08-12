#include "Memtable.h"

void Memtable::put(const std::string& key, const std::string& value) {
    std::lock_guard<std::mutex> lock(mtx);
    store[key] = value;
}

std::string Memtable::get(const std::string& key) const {
    std::lock_guard<std::mutex> lock(mtx);
    auto it = store.find(key);
    if (it != store.end()) {
        return it->second;
    }
    return "";
}

void Memtable::remove(const std::string& key) {
    std::lock_guard<std::mutex> lock(mtx);
    store.erase(key);
}

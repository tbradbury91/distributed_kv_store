#include "kv_store.h"
#include "kv_store_impl.h"
#include <shared_mutex>  // Include for shared_mutex
#include <iostream>

KVStore::KVStore() : impl(new KVStoreImpl) {}
KVStore::~KVStore() = default;

void KVStore::put(const std::string& key, const std::string& value) {
    std::lock_guard<std::mutex> lock(impl->mtx);  // Lock for thread safety
    impl->store[key] = value;
}

std::string KVStore::get(const std::string& key) const {
    std::lock_guard<std::mutex> lock(impl->mtx);  // Shared lock for read
    auto it = impl->store.find(key);
    if (it != impl->store.end()) {
        return it->second;
    }
    return "";
}

void KVStore::remove(const std::string& key) {
    std::lock_guard<std::mutex> lock(impl->mtx);  // Lock for thread safety
    impl->store.erase(key);
}

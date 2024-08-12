#ifndef KV_STORE_IMPL_H
#define KV_STORE_IMPL_H

#include <unordered_map>  // Use unordered_map for a hash table implementation
#include <string>
#include <memory>
#include <mutex>  // Include for concurrency

class KVStoreImpl {
public:
    std::unordered_map<std::string, std::string> store;
    std::mutex mtx;  // Mutex for thread safety
};

#endif // KV_STORE_IMPL_H

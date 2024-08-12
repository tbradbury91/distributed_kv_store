#ifndef KV_STORE_H
#define KV_STORE_H

#include <string>
#include <memory>  // Include for std::unique_ptr

class KVStoreImpl;  // Forward declaration

class KVStore {
public:
    KVStore();
    ~KVStore();

    void put(const std::string& key, const std::string& value);
    std::string get(const std::string& key) const;
    void remove(const std::string& key);

private:
    std::unique_ptr<KVStoreImpl> impl;  // Use std::unique_ptr for automatic memory management
};

#endif // KV_STORE_H


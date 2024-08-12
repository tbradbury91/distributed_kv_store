#include <iostream>
#include <chrono>  // For timing
#include <thread>  // For multithreading
#include <vector>
#include "kv_store.h"

void insertEntries(KVStore& store, int start, int end) {
    for (int i = start; i < end; ++i) {
        store.put("key" + std::to_string(i), "value" + std::to_string(i));
    }
}

void retrieveEntries(KVStore& store, int start, int end) {
    for (int i = start; i < end; ++i) {
        std::string value = store.get("key" + std::to_string(i));
    }
}

int main() {
    KVStor
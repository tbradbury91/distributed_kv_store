cmake_minimum_required(VERSION 3.10)
project(kv_store)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/kv_store.cpp
    src/Memtable.cpp
    src/WriteAheadLog.cpp
    src/ReplicationManager.cpp
)

# Create the executable
add_executable(kv_store ${SOURCES})

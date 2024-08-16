Distributed Key-Value Store

This project is a simple yet powerful distributed key-value store implemented in C++. It supports basic operations such as storing, retrieving, and deleting key-value pairs, and is designed with a focus on performance, scalability, and ease of use. Additionally, it includes a built-in stress test to evaluate the system's performance under load.

The Distributed Key-Value Store is designed to provide a scalable solution for storing and retrieving data across multiple nodes in a network. This project serves as a foundational implementation of distributed systems concepts.

Features

PUT: Store a key-value pair.

GET: Retrieve the value for a given key.

REMOVE: Delete a key-value pair.

Distributed Architecture: Operates across multiple nodes for improved scalability and fault tolerance.

Built-in Stress Test: Evaluate the performance of the key-value store under high load conditions.

System Architecture

The distributed key-value store follows a modular architecture with distinct layers for networking, data storage, and client interactions. Nodes communicate with each other to manage data distribution and ensure consistency. The system is designed to handle network partitions and node failures gracefully, ensuring high availability.

Prerequisites

C++ Compiler: GCC or Clang
CMake: For building the project
Git: For version control (optional)
Setup

1. Clone the Repository
First, clone the repository to your local machine:

Copy code
git clone https://github.com/yourusername/distributed_kv_store.git

2. Build the Project
Navigate to the project directory and build the project using CMake:

cd distributed_kv_store
mkdir build
cd build
cmake ..
make
Usage

1. Running the Key-Value Store

To start the key-value store:

./kv_store

2. Interacting with the Key-Value Store
You can interact with the key-value store using the following commands:

PUT Command: Store a key-value pair
PUT mykey myvalue
PUT username john_doe

GET Command: Retrieve the value for a given key
GET mykey
Example:
GET username
Expected output:
john_doe

REMOVE Command: Delete a key-value pair
REMOVE mykey
Example:
REMOVE username

Stress Testing

To assess the performance of the key-value store under load, a built-in stress test can be run. This test simulates a high volume of requests to measure how the system performs under pressure.

To run the stress test:

./kv_store --stress-test

The results will include metrics such as response time, throughput, and any errors encountered, helping you identify potential bottlenecks and optimize the system.

License

This project is licensed under the MIT License. See the LICENSE file for more details.

Contact

If you have any questions or need help, feel free to open an issue on GitHub or contact me via email.

Distributed Key-Value Store

This project is a simple yet powerful distributed key-value store implemented in C++. It supports basic operations such as storing, retrieving, and deleting key-value pairs and is designed with a focus on performance, scalability, and ease of use. Additionally, it includes a built-in stress test to evaluate the system's performance under load.



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

Visual Studio Code: A popular code editor with support for C++ development.
C++ Compiler: GCC, Clang, or MSVC (depending on your platform).
C++ Extension for VS Code: For syntax highlighting, IntelliSense, and debugging.
Setup

1. Clone the Repository
First, clone the repository to your local machine:


git clone https://github.com/yourusername/distributed_kv_store.git
2. Open the Project in VS Code
Navigate to the project directory and open it in Visual Studio Code:


cd distributed_kv_store
code .
3. Configure Build and Debug Settings
In VS Code, you can configure your build and debug settings using the tasks.json and launch.json files. Here's how to set them up:

Open the Command Palette (Ctrl+Shift+P or Cmd+Shift+P on macOS) and select C++: Edit Configurations (UI).
Configure your compiler path, build tasks, and debugging options according to your development environment.
Alternatively, you can manually create these configuration files in the .vscode directory:

tasks.json (for building the project)
launch.json (for debugging the project)
4. Build the Project
Once your configuration is set up, you can build the project:

Open the Command Palette and select Tasks: Run Build Task or use the shortcut (Ctrl+Shift+B).
This will compile your code using the configured compiler.
Usage

1. Running the Key-Value Store
To start the key-value store, run the compiled executable:


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

If you have any questions or need help, feel free to open an issue on GitHub or email me.

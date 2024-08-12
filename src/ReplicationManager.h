#ifndef REPLICATION_MANAGER_H
#define REPLICATION_MANAGER_H

#include <string>

class ReplicationManager {
public:
    ReplicationManager(const std::string& master_address);
    void replicate(const std::string& data);

private:
    std::string master_address;
};

#endif // REPLICATION_MANAGER_H

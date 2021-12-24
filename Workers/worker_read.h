#ifndef WORKFLOW_WORKER_READ_H
#define WORKFLOW_WORKER_READ_H

#include "worker.h"
#include <fstream>

class WorkerRead: public Worker{
public:
    std::vector<std::string> process (std::vector<std::string>& in, std::string& args) override;
};



#endif //WORKFLOW_WORKER_READ_H

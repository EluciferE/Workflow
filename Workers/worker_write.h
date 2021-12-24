#ifndef WORKFLOW_WORKER_WRITE_H
#define WORKFLOW_WORKER_WRITE_H

#include "worker.h"
#include <fstream>

class WorkerWrite: public Worker{
public:
    std::vector<std::string> process (std::vector<std::string>& in, std::string& args) override;
};



#endif //WORKFLOW_WORKER_WRITE_H

#ifndef WORKFLOW_WORKER_READ_H
#define WORKFLOW_WORKER_READ_H

#include "worker.h"
#include <fstream>

class WorkerRead: public Worker{
public:
    void process (WorkData& in, std::string& args) override;
};



#endif //WORKFLOW_WORKER_READ_H

#ifndef WORKFLOW_WORKER_WRITE_H
#define WORKFLOW_WORKER_WRITE_H

#include "worker.h"
#include <fstream>

class WorkerWrite: public Worker{
public:
    void process (WorkData& in, std::string& args) override;
};



#endif //WORKFLOW_WORKER_WRITE_H

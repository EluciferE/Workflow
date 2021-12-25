#ifndef WORKFLOW_WORKER_DUMP_H
#define WORKFLOW_WORKER_DUMP_H

#include "worker.h"
#include <fstream>

class WorkerDump: public Worker{
public:
    void process (WorkData& in, const std::string& args) const override;
};



#endif //WORKFLOW_WORKER_DUMP_H

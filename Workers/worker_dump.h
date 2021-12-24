#ifndef WORKFLOW_WORKER_DUMP_H
#define WORKFLOW_WORKER_DUMP_H

#include "worker.h"

class WorkerDump: public Worker{
public:
    std::vector<std::string> process (std::vector<std::string>& in, std::string& args) override;
};



#endif //WORKFLOW_WORKER_DUMP_H

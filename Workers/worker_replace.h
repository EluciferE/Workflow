#ifndef WORKFLOW_WORKER_REPLACE_H
#define WORKFLOW_WORKER_REPLACE_H

#include "worker.h"

class WorkerReplace: public Worker{
public:
    std::vector<std::string> process (std::vector<std::string>& in, std::string& args) override;
};



#endif //WORKFLOW_WORKER_REPLACE_H

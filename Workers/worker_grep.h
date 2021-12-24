#ifndef WORKFLOW_WORKER_GREP_H
#define WORKFLOW_WORKER_GREP_H

#include "worker.h"

class WorkerGrep: public Worker{
public:
    std::vector<std::string> process (std::vector<std::string>& in, std::string& args) override;

};


#endif //WORKFLOW_WORKER_GREP_H

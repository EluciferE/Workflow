#ifndef WORKFLOW_WORKER_GREP_H
#define WORKFLOW_WORKER_GREP_H

#include "worker.h"

class WorkerGrep: public Worker{
public:
    void process (WorkData& in, const std::string& args) const override;

};


#endif //WORKFLOW_WORKER_GREP_H

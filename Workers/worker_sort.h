#ifndef WORKFLOW_WORKER_SORT_H
#define WORKFLOW_WORKER_SORT_H

#include "worker.h"
#include <algorithm>

class WorkerSort: public Worker{
public:
    void process (WorkData& in, const std::string& args) const override;
};



#endif //WORKFLOW_WORKER_SORT_H

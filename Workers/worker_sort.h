#ifndef WORKFLOW_WORKER_SORT_H
#define WORKFLOW_WORKER_SORT_H

#include "worker.h"
#include <algorithm>

class WorkerSort: public Worker{
public:
    std::vector<std::string> process (std::vector<std::string>& in, std::string& args) override;
};



#endif //WORKFLOW_WORKER_SORT_H

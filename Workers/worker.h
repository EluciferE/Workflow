#ifndef WORKFLOW_WORKER_H
#define WORKFLOW_WORKER_H

#include <string>
#include <vector>
#include "../Exceptions/worker_exception.h"
#include "../WorkExecutor/work_data.h"

class Worker{
public:
    virtual void process (WorkData& in, std::string& args) = 0;
};


#endif //WORKFLOW_WORKER_H

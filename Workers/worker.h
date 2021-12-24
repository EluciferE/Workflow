#ifndef WORKFLOW_WORKER_H
#define WORKFLOW_WORKER_H

#include <string>
#include <vector>
#include "../Exceptions/worker_exception.h"

class Worker{
public:
    virtual std::vector<std::string> process (std::vector<std::string>& in, std::string& args) = 0;
};


#endif //WORKFLOW_WORKER_H

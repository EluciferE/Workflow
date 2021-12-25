#ifndef WORKFLOW_WORKER_REPLACE_H
#define WORKFLOW_WORKER_REPLACE_H

#include "worker.h"
#include <regex>

class WorkerReplace: public Worker{
public:
    void process (WorkData& in, std::string& args) override;
    static std::pair<std::string, std::string> parseArgs(std::string args);
};



#endif //WORKFLOW_WORKER_REPLACE_H

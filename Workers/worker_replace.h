#ifndef WORKFLOW_WORKER_REPLACE_H
#define WORKFLOW_WORKER_REPLACE_H

#include "worker.h"
#include <regex>

class WorkerReplace: public Worker{
public:
    void process (WorkData& in, const std::string& args) const override;
    static std::pair<std::string, std::string> parseArgs(const std::string& args);
};



#endif //WORKFLOW_WORKER_REPLACE_H

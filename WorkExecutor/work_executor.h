#ifndef WORKFLOW_WORK_EXECUTOR_H
#define WORKFLOW_WORK_EXECUTOR_H

#include <string>
#include <map>
#include <vector>
#include <fstream>
#include "../Exceptions/executor_exceptions.h"

// Workers
#include "../Workers/worker_read.h"
#include "../Workers/worker_dump.h"
#include "../Workers/worker_grep.h"
#include "../Workers/worker_replace.h"
#include "../Workers/worker_sort.h"
#include "../Workers/worker_write.h"
#include "work_data.h"

class WorkerExecutor{
public:
    static void Execute(std::map<int, std::pair<std::string, std::string>>& config, const std::vector<int>& order);
};


#endif //WORKFLOW_WORK_EXECUTOR_H

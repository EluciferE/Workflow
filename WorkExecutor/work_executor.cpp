#include "work_executor.h"


void WorkerExecutor::Execute(std::map<int, std::pair<std::string, std::string>>& config, const std::vector<int>& order) {
    std::string type, args, buffer;

    WorkData data;

    std::unique_ptr<Worker> worker;
    for (auto i: order){
        if (config.find(i) == config.end())
            throw ExecutorException("Cant call block " + std::to_string(i));

        type = config[i].first;
        args = config[i].second;

        if (type == "readfile")
            worker = std::make_unique<WorkerRead>();
        else if (type == "writefile")
            worker = std::make_unique<WorkerWrite>();
        else if (type == "grep")
            worker = std::make_unique<WorkerGrep>();
        else if (type == "sort")
            worker = std::make_unique<WorkerSort>();
        else if (type == "replace")
            worker = std::make_unique<WorkerReplace>();
        else if (type == "dump")
            worker = std::make_unique<WorkerDump>();
        else
            throw ExecutorException("Unknown type: " + type);

        worker->process(data, args);
    }

}

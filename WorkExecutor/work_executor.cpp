#include "work_executor.h"


void WorkerExecutor::Execute(std::map<int, std::pair<std::string, std::string>>& config, const std::vector<int>& order) {
    std::string type, args, buffer;
    std::ifstream in;

    std::vector<std::string> data;

    while (!in.eof()){
        std::getline(in, buffer);
        data.insert(data.end(), buffer);
    }

    Worker* worker;
    for (auto i: order){
        if (config.find(i) == config.end())
            throw ExecutorException("Cant call block " + std::to_string(i));

        type = config[i].first;
        args = config[i].second;

        if (type == "readfile")
            worker = new WorkerRead;
        else if (type == "writefile")
            worker = new WorkerWrite;
        else if (type == "grep")
            worker = new WorkerGrep ;
        else if (type == "sort")
            worker = new WorkerSort ;
        else if (type == "replace")
            worker = new WorkerReplace ;
        else if (type == "dump")
            worker = new WorkerDump ;
        else
            throw ExecutorException("Unknown type: " + type);

        data = worker->process(data, args);
    }

}

#include "work_executor.h"


void WorkerExecutor::Execute(std::map<int, std::pair<std::string, std::string>>& config, const std::vector<int>& order) {
    std::string type, args, buffer;
    std::ifstream in;

    std::vector<std::string> data;


    while (!in.eof()){
        std::getline(in, buffer);
        data.insert(data.end(), buffer);
    }


    for (auto i: order){
        type = config[i].first;
        args = config[i].second;

        if (type == "readfile") {
            WorkerRead worker;
            data = worker.process(data, args);
        }
        else if (type == "writefile") {
            WorkerWrite worker;
            data = worker.process(data, args);
        }
        else if (type == "grep") {
            WorkerGrep worker;
            data = worker.process(data, args);
        }
        else if (type == "sort"){
            WorkerSort worker;
            data = worker.process(data, args);
        }
        else if (type == "replace") {
            WorkerReplace worker;
            data = worker.process(data, args);
        }
        else if (type == "dump") {
            WorkerDump worker;
            data = worker.process(data, args);
        }

    }

}

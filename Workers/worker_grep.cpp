//
// Created by Meow on 18.12.2021.
//

#include "worker_grep.h"

void WorkerGrep::process(WorkData &in, const std::string &args) const {
    std::vector<std::string> new_data;

    if (!in.getFilled())
        throw WorkerException("Bad order for 'grep' (got empty data)");

    for (auto &line: in.getData()){
        if (line.find(args) != std::string::npos)
            new_data.insert(new_data.end(), line);
    }
    in.setData(new_data);
}

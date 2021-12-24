//
// Created by Meow on 18.12.2021.
//

#include "worker_grep.h"

std::vector<std::string> WorkerGrep::process(std::vector<std::string> &in, std::string &args) {
    std::vector<std::string> new_data;

    if ((in.size() == 1) && (in[0].empty()))
        throw WorkerException("Bad order for 'grep' (got empty data)");

    for (auto &line: in){
        if (line.find(args) != std::string::npos)
            new_data.insert(new_data.end(), line);
    }
    return new_data;
}

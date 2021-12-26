//
// Created by Meow on 18.12.2021.
//

#include "worker_read.h"

void WorkerRead::process(WorkData &in, const std::string &args) const {
    std::vector<std::string> data;
    std::string buffer;

    if (in.getFilled())
        throw WorkerException("Bad order for 'read' (got some data)");

    std::fstream file_in;
    file_in.open(args);

    if (!file_in)
        throw WorkerException("can't open file '" + args + "' for reading");

    while (!file_in.eof()){
        getline(file_in, buffer);
        data.insert(data.end(), buffer);
    }
    in.setData(std::move(data));
    in.setFilled(true);
}

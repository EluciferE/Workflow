//
// Created by Meow on 18.12.2021.
//

#include "worker_read.h"

std::vector<std::string> WorkerRead::process(std::vector<std::string> &in, std::string &args) {
    std::vector<std::string> data;
    std::string buffer;

    std::fstream file_in;
    file_in.open(args);

    // TODO check error
    while (!file_in.eof()){
        getline(file_in, buffer);
        data.insert(data.end(), buffer);
    }

    return data;
}

//
// Created by Meow on 18.12.2021.
//

#include "worker_sort.h"

std::vector<std::string> WorkerSort::process(std::vector<std::string> &in, std::string &args) {
    if ((in.size() == 1) && (in[0].empty()))
        throw WorkerException("Bad order for 'sort' (got empty data)");

    std::sort(in.begin(), in.end());
    return in;
}


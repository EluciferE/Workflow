//
// Created by Meow on 18.12.2021.
//

#include "worker_sort.h"

std::vector<std::string> WorkerSort::process(std::vector<std::string> &in, std::string &args) {
    std::sort(in.begin(), in.end());
    return in;
}


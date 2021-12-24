//
// Created by Meow on 18.12.2021.
//

#include "worker_write.h"

std::vector<std::string> WorkerWrite::process(std::vector<std::string> &in, std::string &args) {
    std::ofstream out;
    out.open(args);

    // TODO check errors
    for (auto & i : in)
        out << i << "\n";

    out.close();

    return std::vector<std::string>();
}

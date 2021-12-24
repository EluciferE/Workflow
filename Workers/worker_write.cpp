//
// Created by Meow on 18.12.2021.
//

#include "worker_write.h"

std::vector<std::string> WorkerWrite::process(std::vector<std::string> &in, std::string &args) {
    std::ofstream out;
    out.open(args);

    if (!out)
        throw WorkerException("Cant open file '" + args + "' for writing");

    if ((in.size() == 1) && (in[0].empty()))
        throw WorkerException("Bad order for 'write' (got empty data)");

    for (auto & i : in)
        out << i << "\n";

    out.close();

    return std::vector<std::string>();
}

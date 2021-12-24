//
// Created by Meow on 18.12.2021.
//

#include "worker_dump.h"

std::vector<std::string> WorkerDump::process(std::vector<std::string> &in, std::string &args) {
    std::ofstream out;
    out.open(args);

    if ((in.size() == 1) && (in[0].empty()))
        throw WorkerException("Bad order for 'dump' (got empty data)");

    if (!out)
        throw WorkerException("can't create file '" + args + "' for dump");

    for (auto & i : in)
        out << i << "\n";

    out.close();

    return in;
}

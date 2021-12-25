//
// Created by Meow on 18.12.2021.
//

#include "worker_dump.h"

void WorkerDump::process(WorkData &in, std::string &args) {
    std::ofstream out;
    out.open(args);

    if (!in.getFilled())
        throw WorkerException("Bad order for 'dump' (got empty data)");

    if (!out)
        throw WorkerException("can't create file '" + args + "' for dump");

    for (auto & i : in.getData())
        out << i << "\n";

    out.close();
}

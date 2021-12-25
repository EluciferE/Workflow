//
// Created by Meow on 18.12.2021.
//

#include "worker_write.h"

void WorkerWrite::process(WorkData &in, std::string &args) {
    std::ofstream out;
    out.open(args);

    if (!in.getFilled())
        throw WorkerException("Bad order for 'write' (got empty data)");

    if (!out)
        throw WorkerException("Cant open file '" + args + "' for writing");


    for (auto & i : in.getData())
        out << i << "\n";

    out.close();
    in.setFilled(false);
}

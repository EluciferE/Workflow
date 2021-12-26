//
// Created by Meow on 18.12.2021.
//

#include "worker_sort.h"

void WorkerSort::process(WorkData &in, const std::string &args) const {
    if (!in.getFilled())
        throw WorkerException("Bad order for 'sort' (got empty data)");

    std::vector<std::string> new_data = in.getData();
    std::sort(new_data.begin(), new_data.end());
    in.setData(std::move(new_data));
}


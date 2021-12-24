#include <iostream>
#include "ConfigReader/config_reader.h"
#include "WorkExecutor/work_executor.h"

int main() {
    ConfigReader reader("../config.txt");
    reader.parseConfig();
    auto config = reader.getConfig();
    auto order = reader.getOrder();

    WorkerExecutor::Execute(config, order);

    return 0;
}

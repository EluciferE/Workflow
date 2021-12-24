#include <iostream>
#include "ConfigReader/config_reader.h"
#include "WorkExecutor/work_executor.h"

int main(int argv, char** argc) {
    try {
        if (argv != 2)
            throw ExecutorException("Bad number of args: expected 1, but got " + std::to_string(argv - 1));

        ConfigReader reader(argc[1]);
        reader.parseConfig();
        auto config = reader.getConfig();
        auto order = reader.getOrder();

        WorkerExecutor::Execute(config, order);
    }
    catch (WorkerException& error){
        std::cout << "Error in worker:\n" + error.what() << std::endl;
        return 1;
    }
    catch (ExecutorException& error){
        std::cout << "Error in executor:\n" + error.what() << std::endl;
        return 2;
    }

    return 0;
}

//
// Created by Meow on 24.12.2021.
//

#include "executor_exceptions.h"

const std::string &ExecutorException::what() {
    return error;
}

ExecutorException::ExecutorException(const std::string& message){
    error = message;
}

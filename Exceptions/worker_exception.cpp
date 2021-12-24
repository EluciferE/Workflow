//
// Created by Meow on 24.12.2021.
//

#include "worker_exception.h"

WorkerException::WorkerException(const std::string& message) {
    error = message;
}

const std::string& WorkerException::what() {
    return error;
}

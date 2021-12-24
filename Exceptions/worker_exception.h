#ifndef WORKFLOW_WORKER_EXCEPTION_H
#define WORKFLOW_WORKER_EXCEPTION_H

#include "exception.h"

class WorkerException: public Exception{
public:
    explicit WorkerException(const std::string& message);
    const std::string& what() override;


};

#endif //WORKFLOW_WORKER_EXCEPTION_H

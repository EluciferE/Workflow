#ifndef WORKFLOW_EXECUTOR_EXCEPTIONS_H
#define WORKFLOW_EXECUTOR_EXCEPTIONS_H

#include "exception.h"

class ExecutorException: public Exception{
public:
    explicit ExecutorException(const std::string& message);
    const std::string& what() override;


};

#endif //WORKFLOW_EXECUTOR_EXCEPTIONS_H

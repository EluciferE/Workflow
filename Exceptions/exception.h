#ifndef WORKFLOW_EXCEPTION_H
#define WORKFLOW_EXCEPTION_H

#include <exception>
#include <string>

class Exception: public std::exception{
protected:
    std::string error;
public:
    virtual const std::string& what() = 0;


};
#endif //WORKFLOW_EXCEPTION_H

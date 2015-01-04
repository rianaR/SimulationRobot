#ifndef _ILLEGAL_COMMAND_EXCEPTION_H_
#define _ILLEGAL_COMMAND_EXCEPTION_H_

#include <exception>
#include <sstream>
#include <iostream>

class IllegalCommandException : public std::exception{
private:
    std::string msg;

public:
    IllegalCommandException(std::string);

    virtual ~IllegalCommandException() throw() {};
    virtual const char * what() const throw();

};

#endif
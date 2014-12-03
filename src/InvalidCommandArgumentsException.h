#ifndef _INVALID_COMMAND_ARGUMENTS_EXCEPTION_H_
#define _INVALID_COMMAND_ARGUMENTS_EXCEPTION_H_

#include <exception>
#include <sstream>
#include <iostream>

class InvalidCommandArgumentsException : public std::exception{
    private:
        std::string msg;

    public:
        InvalidCommandArgumentsException(std::string, int);

        virtual ~InvalidCommandArgumentsException() throw() {};
        virtual const char * what() const throw();

};

#endif
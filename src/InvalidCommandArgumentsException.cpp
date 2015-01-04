#include "InvalidCommandArgumentsException.h"

using namespace std;

InvalidCommandArgumentsException::InvalidCommandArgumentsException(string nomCommande)
{
    std::ostringstream oss;
    oss << "Arguments invalides pour la commande " << nomCommande << endl;
    this->msg = oss.str();
}

const char * InvalidCommandArgumentsException::what() const throw() {
    return this->msg.c_str();
}
#include "IllegalCommandException.h"

using namespace std;

IllegalCommandException::IllegalCommandException(string nomCommande)
{
    std::ostringstream oss;
    oss << "La commande " << nomCommande << " ne peut pas être appelée dans cet état." << endl;
    this->msg = oss.str();
}

const char * IllegalCommandException::what() const throw() {
    return this->msg.c_str();
}
#ifndef _COMMANDE_FIGER_H
#define _COMMANDE_FIGER_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandeFiger : public CommandeRobot {
private :
    static CommandeFiger _instance;
    CommandeFiger(std::string);
    CommandeFiger(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandeFiger *constructeurVirtuel(Interprete *interprete);

};

#endif
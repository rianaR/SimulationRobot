#ifndef _COMMANDE_REPARTIR_H
#define _COMMANDE_REPARTIR_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandeRepartir : public CommandeRobot {
private :
    static CommandeRepartir _instance;
    CommandeRepartir(std::string);
    CommandeRepartir(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandeRepartir *constructeurVirtuel(Interprete *interprete);

};

#endif
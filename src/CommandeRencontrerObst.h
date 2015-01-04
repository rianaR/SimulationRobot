#ifndef _COMMANDE_RENCONTRER_OBST_H
#define _COMMANDE_RENCONTRER_OBST_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"
#include "Plot.h"


class CommandeRencontrerObst : public CommandeRobot {
private :
    static CommandeRencontrerObst _instance;
    int _obstacle;
    CommandeRencontrerObst(std::string);
    CommandeRencontrerObst(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandeRencontrerObst *constructeurVirtuel(Interprete *interprete);

};

#endif
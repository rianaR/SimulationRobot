#ifndef _COMMANDE_EVALUER_OBST_H
#define _COMMANDE_EVALUER_OBST_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandeEvaluerObst : public CommandeRobot {
private :
    static CommandeEvaluerObst _instance;
    CommandeEvaluerObst(std::string);
    CommandeEvaluerObst(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandeEvaluerObst *constructeurVirtuel(Interprete *interprete);

};

#endif
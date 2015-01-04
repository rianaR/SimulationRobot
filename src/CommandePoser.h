#ifndef _COMMANDE_POSER_H
#define _COMMANDE_POSER_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandePoser : public CommandeRobot {
private :
    static CommandePoser _instance;
    CommandePoser(std::string);
    CommandePoser(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandePoser *constructeurVirtuel(Interprete *interprete);

};

#endif
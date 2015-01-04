#ifndef _COMMANDE_TOURNER_H
#define _COMMANDE_TOURNER_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandeTourner : public CommandeRobot {
private :
    static CommandeTourner _instance;
    std::string _direction;
    CommandeTourner(std::string);
    CommandeTourner(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandeTourner *constructeurVirtuel(Interprete *interprete);

};

#endif
#ifndef _COMMANDE_ROBOT_H_
#define _COMMANDE_ROBOT_H_

#include "Robot.h"
#include "Commande.h"

class CommandeRobot : public Commande {
    protected :
        Robot* _robot;
        CommandeRobot(Interprete *interprete);
        CommandeRobot(std::string nomCommande);

};

#endif
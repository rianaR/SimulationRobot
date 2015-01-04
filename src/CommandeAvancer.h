#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandeAvancer : public CommandeRobot {
    private :
        static CommandeAvancer _instance;
        int _x;
        int _y;
        CommandeAvancer(std::string);
        CommandeAvancer(Interprete *interprete);
    public :
        void execute();
        void desexecute();
        CommandeAvancer *constructeurVirtuel(Interprete *interprete);

    };

#endif
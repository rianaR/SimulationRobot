#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

#include "CommandeRobot.h"
#include <string>
#include <vector>
#include "Robot.h"

class CommandeAvancer : public CommandeRobot {
    private :
        static CommandeAvancer _instance;
        int _x;
        int _y;
        CommandeAvancer(std::string);
        CommandeAvancer(Invocateur *invoc);
    public :
        void execute();
        void desexecute();
        CommandeAvancer *constructeurVirtuel(Invocateur invoc);

    };

#endif
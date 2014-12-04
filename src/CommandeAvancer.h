#ifndef _COMMANDE_AVANCER_H
#define _COMMANDE_AVANCER_H

#include "Commande.h"
#include <string>
#include <vector>
#include "Robot.h"

class CommandeAvancer : public Commande{
    private :
        int _x;
        int _y;
        CommandeAvancer();
        CommandeAvancer(Robot *,std::vector<std::string>);
    public :
        void execute();
        void desexecute();
        CommandeAvancer *constructeurVirtuel(Robot *,std::vector<std::string>);

    };

#endif
#ifndef _COMMANDE_H_
#define _COMMANDE_H_

#include <string>
#include <vector>
#include <map>

#include "Robot.h"

class Commande {
    protected :
        Robot* _robot;
        Commande(std::string, Robot *);
    public :
        class InvalidCommandArgumentsException{};
        virtual Commande* constructeurVirtuel(Robot *,std::vector<std::string>)=0;
        virtual void execute()=0;
        virtual void desexecute()=0;
        static Commande* nouvelleCommande(std::string, Robot *,std::vector<std::string>);
        static std::map<std::string,Commande*>& commandesInscrites();

    };

#endif
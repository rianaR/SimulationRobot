#ifndef _COMMANDE_H_
#define _COMMANDE_H_

#include <string>
#include <vector>
#include <map>
#include <iostream>

#include "Interprete.h"

class Commande {
    protected :
        Commande() {};
        Commande(std::string);
    public :
        class InvalidCommandArgumentsException{};
        virtual Commande* constructeurVirtuel(Interprete *invoc)=0;
        virtual void execute()=0;
        virtual void desexecute()=0;
        static Commande* nouvelleCommande(std::string,Interprete *invoc);
        static std::map<std::string,Commande*>& commandesInscrites();

    };

#endif
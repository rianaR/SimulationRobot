#ifndef _COMMANDE_H_
#define _COMMANDE_H_

#include "Interprete.h"

#include <string>
#include <vector>
#include <map>
#include <iostream>

class Interprete;

class Commande {
    protected :
        Commande() {};
        Commande(std::string);
    public :
        class InvalidCommandArgumentsException{};
        virtual Commande* constructeurVirtuel(Interprete *interprete)=0;
        virtual void execute()=0;
        //virtual void desexecute()=0;
        static Commande* nouvelleCommande(std::string,Interprete *interprete);
        static std::map<std::string,Commande*>& commandesInscrites();

};

#endif
#ifndef _COMMANDE_SAISIR_H
#define _COMMANDE_SAISIR_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandeSaisir : public CommandeRobot {
private :
    static CommandeSaisir _instance;
    int _objet;
    CommandeSaisir(std::string);
    CommandeSaisir(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandeSaisir *constructeurVirtuel(Interprete *interprete);

};

#endif
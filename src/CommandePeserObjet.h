#ifndef _COMMANDE_PESER_OBJET_H
#define _COMMANDE_PESER_OBJET_H


#include <string>
#include <vector>
#include <stdexcept>
#include "CommandeRobot.h"
#include "Robot.h"


class CommandePeserObjet : public CommandeRobot {
private :
    static CommandePeserObjet _instance;
    CommandePeserObjet(std::string);
    CommandePeserObjet(Interprete *interprete);
public :
    void execute();
    void desexecute();
    CommandePeserObjet *constructeurVirtuel(Interprete *interprete);

};

#endif
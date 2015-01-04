#include "CommandePeserObjet.h"

using namespace std;

CommandePeserObjet CommandePeserObjet::_instance("PESEROBJET");

CommandePeserObjet::CommandePeserObjet(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandePeserObjet *CommandePeserObjet::constructeurVirtuel(Interprete *interprete) {
    return new CommandePeserObjet(interprete);
}

CommandePeserObjet::CommandePeserObjet(Interprete *interprete) : CommandeRobot(interprete) {

}

void CommandePeserObjet::execute() {
    _robot->peser();
}

void CommandePeserObjet::desexecute() {

}

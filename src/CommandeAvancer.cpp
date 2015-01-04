#include "CommandeAvancer.h"

using namespace std;

CommandeAvancer CommandeAvancer::_instance("AVANCER");

CommandeAvancer::CommandeAvancer(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandeAvancer *CommandeAvancer::constructeurVirtuel(Interprete *interprete) {
    return new CommandeAvancer(interprete);
}

CommandeAvancer::CommandeAvancer(Interprete *interprete) : CommandeRobot(interprete) {
    _x = _interprete->getIntParameter();
    _y = _interprete->getIntParameter();
}

void CommandeAvancer::execute() {
    _robot->avancer(_x,_y);
}

void CommandeAvancer::desexecute() {

}

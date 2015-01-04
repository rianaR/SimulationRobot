#include "CommandeTourner.h"

using namespace std;

CommandeTourner CommandeTourner::_instance("TOURNER");

CommandeTourner::CommandeTourner(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandeTourner *CommandeTourner::constructeurVirtuel(Interprete *interprete) {
    return new CommandeTourner(interprete);
}

CommandeTourner::CommandeTourner(Interprete *interprete) : CommandeRobot(interprete) {
    _direction = _interprete->getStringParameter();
}

void CommandeTourner::execute() {
    _robot->tourner(_direction);
}

void CommandeTourner::desexecute() {

}

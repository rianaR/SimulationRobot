#include "CommandePoser.h"

using namespace std;

CommandePoser CommandePoser::_instance("POSER");

CommandePoser::CommandePoser(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandePoser *CommandePoser::constructeurVirtuel(Interprete *interprete) {
    return new CommandePoser(interprete);
}

CommandePoser::CommandePoser(Interprete *interprete) : CommandeRobot(interprete) {

}

void CommandePoser::execute() {
    _robot->poser();
}

void CommandePoser::desexecute() {

}

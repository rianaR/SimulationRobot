#include "CommandeFiger.h"

using namespace std;

CommandeFiger CommandeFiger::_instance("FIGER");

CommandeFiger::CommandeFiger(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandeFiger *CommandeFiger::constructeurVirtuel(Interprete *interprete) {
    return new CommandeFiger(interprete);
}

CommandeFiger::CommandeFiger(Interprete *interprete) : CommandeRobot(interprete) {

}

void CommandeFiger::execute() {
    _robot->figer();
}

void CommandeFiger::desexecute() {

}

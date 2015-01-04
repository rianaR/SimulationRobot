#include "CommandeRepartir.h"

using namespace std;

CommandeRepartir CommandeRepartir::_instance("REPARTIR");

CommandeRepartir::CommandeRepartir(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandeRepartir *CommandeRepartir::constructeurVirtuel(Interprete *interprete) {
    return new CommandeRepartir(interprete);
}

CommandeRepartir::CommandeRepartir(Interprete *interprete) : CommandeRobot(interprete) {

}

void CommandeRepartir::execute() {
    _robot->repartir();
}

void CommandeRepartir::desexecute() {

}

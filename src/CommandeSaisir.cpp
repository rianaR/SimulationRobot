#include "CommandeSaisir.h"

using namespace std;

CommandeSaisir CommandeSaisir::_instance("SAISIR");

CommandeSaisir::CommandeSaisir(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandeSaisir *CommandeSaisir::constructeurVirtuel(Interprete *interprete) {
    return new CommandeSaisir(interprete);
}

CommandeSaisir::CommandeSaisir(Interprete *interprete) : CommandeRobot(interprete) {
    _objet = _interprete->getIntParameter();
}

void CommandeSaisir::execute() {
    Objet *objet = new Objet(_objet);
    _robot->saisir(objet);
}

void CommandeSaisir::desexecute() {

}

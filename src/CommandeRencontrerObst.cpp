#include "CommandeRencontrerObst.h"


using namespace std;

CommandeRencontrerObst CommandeRencontrerObst::_instance("RENCONTREROBST");

CommandeRencontrerObst::CommandeRencontrerObst(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandeRencontrerObst *CommandeRencontrerObst::constructeurVirtuel(Interprete *interprete) {
    return new CommandeRencontrerObst(interprete);
}

CommandeRencontrerObst::CommandeRencontrerObst(Interprete *interprete) : CommandeRobot(interprete) {
    _obstacle = _interprete->getIntParameter();
}

void CommandeRencontrerObst::execute() {
    Plot *plot = new Plot(_obstacle);
    _robot->rencontrerPlot(plot);
}

void CommandeRencontrerObst::desexecute() {

}

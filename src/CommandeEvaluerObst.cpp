#include "CommandeEvaluerObst.h"

using namespace std;

CommandeEvaluerObst CommandeEvaluerObst::_instance("EVALUEROBST");

CommandeEvaluerObst::CommandeEvaluerObst(string nomCommande) : CommandeRobot(nomCommande) {

}

CommandeEvaluerObst *CommandeEvaluerObst::constructeurVirtuel(Interprete *interprete) {
    return new CommandeEvaluerObst(interprete);
}

CommandeEvaluerObst::CommandeEvaluerObst(Interprete *interprete) : CommandeRobot(interprete) {

}

void CommandeEvaluerObst::execute() {
    _robot->evaluerPlot();
}

void CommandeEvaluerObst::desexecute() {

}

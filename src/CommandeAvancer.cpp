#include "CommandeAvancer.h"

using namespace std;

CommandeAvancer CommandeAvancer::_instance("AVANCER");

CommandeAvancer::CommandeAvancer(string nomCommande) : Commande(nomCommande) {

}

CommandeAvancer *CommandeAvancer::constructeurVirtuel(Invocateur invoc) {
    cout << "constr virtuel" << endl;
    return new CommandeAvancer(invoc);
}

CommandeAvancer::CommandeAvancer(Invocateur *invoc) : CommandeRobot(invoc) {

}

void CommandeAvancer::execute() {
    _robot->avancer(_x,_y);
}

void CommandeAvancer::desexecute() {

}

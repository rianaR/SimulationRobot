#include "CommandeAvancer.h"

using namespace std;

CommandeAvancer *CommandeAvancer::constructeurVirtuel(Robot *robot,vector<std::string> params) {
    cout << "constr virtuel" << endl;
    return new CommandeAvancer(robot,params);
}

CommandeAvancer::CommandeAvancer(Robot *robot, vector<string> params) : Commande("AVANCER", robot) {
    cout << "constr commande avancer" << endl;
    if (params.size() < 2) {
        throw Commande::InvalidCommandArgumentsException();
    }
    else {
        _x = stoi(params.at(0));
        _y = stoi(params.at(1));
    }

}

void CommandeAvancer::execute() {
    _robot->avancer(_x,_y);
}

void CommandeAvancer::desexecute() {

}

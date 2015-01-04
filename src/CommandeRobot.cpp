#include "CommandeRobot.h"


using namespace std;

CommandeRobot::CommandeRobot(Interprete *interprete) : Commande(interprete) {
    _robot = _interprete->getRobotPararameter();
}

CommandeRobot::CommandeRobot(string nomCommande)  : Commande(nomCommande) {
}
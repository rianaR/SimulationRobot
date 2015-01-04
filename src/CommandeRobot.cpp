#include "CommandeRobot.h"


using namespace std;

CommandeRobot::CommandeRobot(Interprete *interprete) {
    _robot = interprete->getRobotPararameter();
}

CommandeRobot::CommandeRobot(string nomCommande)  : Commande(nomCommande) {
}
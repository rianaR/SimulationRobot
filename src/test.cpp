#include "Robot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "EtatRobotAVide.h"
#include "EtatRobotFige.h"
#include "AfficheurTraceRobot.h"
#include "CommandeAvancer.h"
#include "InvalidCommandArgumentsException.h"
#include "InterpreteEntreeStandard.h"
#include <iostream>
using namespace std;

int main() {

	//Objet objet(5);
	Position position(1,1);
	//Plot plot(10);
	// Robot a vide
	Robot *robot = new Robot("W",&position,EtatRobotAVide::getInstance());
	AfficheurTraceRobot afficheur(robot);

	robot->attacherAfficheur(&afficheur);

	afficheur.afficher();

	Interprete *interprete = new InterpreteEntreeStandard(robot);
	interprete->run();

}

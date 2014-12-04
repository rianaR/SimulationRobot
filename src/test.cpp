#include "Robot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "EtatRobotAVide.h"
#include "EtatRobotFige.h"
#include "AfficheurTraceRobot.h"
#include "CommandeAvancer.h"
#include "InvalidCommandArgumentsException.h"
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
	


	// Test exception
	/*
	try {
		throw InvalidCommandArgumentsException("Test",3);
	}
	catch (InvalidCommandArgumentsException e) {
		cout << "Exception" << endl;
	}
	return 0;
	*/

	// Test Pattern commande + virtual factory

	vector<string> params;
	params.push_back("10");
	params.push_back("5");
	Commande *commande = Commande::nouvelleCommande("AVANCER", robot, params);

}

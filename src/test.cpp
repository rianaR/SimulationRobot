#include "Robot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "EtatRobotAVide.h"
#include "EtatRobotFige.h"
#include "AfficheurTraceRobot.h"
#include <iostream>
using namespace std;

int main() {

	Objet objet(5);
	Position position(1,1);
	Plot plot(10);
	// Robot a vide
	Robot robot("W",&objet,&plot,&position,EtatRobotAVide::getInstance());
	AfficheurTraceRobot afficheur(&robot);

	robot.attacherAfficheur(&afficheur);

	afficheur.afficher();
	//cout << robot.toString();
	cout << endl;
	cout << endl;
	robot.figer();
	cout << "Robot figé"<< endl;
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.repartir();
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.rencontrerPlot(&plot);
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.evaluerPlot();
	//cout <<robot.toString();
	cout << endl;
	cout << endl;

	robot.saisir(&objet);
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	
	robot.peser();
	//cout <<robot.toString();

	cout << endl;
	cout << endl;

	robot.tourner("O");
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.avancer(1,1);
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.tourner("W");
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.rencontrerPlot(&plot);
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.poser();
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.tourner("S");
	//cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.avancer(2,2);
	cout << endl;
	cout << endl;
	robot.tourner("S");

	return 0;
}

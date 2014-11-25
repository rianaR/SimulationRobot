#include "Robot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "EtatRobotAVide.h"
#include "EtatRobotFige.h"
#include <iostream>
using namespace std;

int main() {

	Objet objet(5);
	Position position(1,1);
	Plot plot(10);
	
	

	// Robot a vide
	Robot robot("W",objet,plot,position,EtatRobotAVide::getInstance());
	cout << objet.getPoids()<<endl;
	// Robot se tourne... doit rester dans le même êtat
	robot.tourner("O");
	cout << robot.toString();
	cout << endl;
	cout << endl;
	robot.figer();
	cout << "Robot figé"<< endl;
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.repartir();
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.rencontrerPlot(plot);
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.evaluerPlot();
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.saisir(objet);
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.tourner("O");
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.avancer(1,1);
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.tourner("W");
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.rencontrerPlot(plot);
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.poser();
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.tourner("S");
	cout <<robot.toString();
	cout << endl;
	cout << endl;
	robot.avancer(2,2);
	return 0;
}

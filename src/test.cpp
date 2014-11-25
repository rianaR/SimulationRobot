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
	cout << robot.toString();
	cout << endl;
	cout << endl;
	robot.repartir();
	cout << robot.toString();
	cout << endl;
	cout << endl;
	robot.rencontrerPlot();
	cout << robot.toString();
	cout << endl;
	cout << endl;
	robot.tourner("O");
	cout << robot.toString();

	return 0;
}

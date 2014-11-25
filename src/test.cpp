#include "Robot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include "EtatRobotAVide.h"
#include <iostream>
using namespace std;

int main() {

	Objet objet(5);
	Position position(1,1);
	Plot plot(10);
	Etat_Robot *etatRobot = EtatRobotAVide::getInstance();
	Robot robot("W",objet,plot,position,etatRobot);
	cout << objet.getPoids()<<endl;
	robot.tourner("W");


	Robot robot2("W",objet,plot,position);
	cout << robot2.toString();

	return 0;
}

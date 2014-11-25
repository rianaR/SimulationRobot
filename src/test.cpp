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
	Robot robot(objet,new Plot(1),position,EtatRobotAVide.getInstance());
	cout << objet.getPoids()<<endl;


	Objet objet(10);
	Plot plot(10);
	Position position(4,4);

	Robot robot("W",objet,plot,position);
	cout << robot.toString();

	return 0;
}

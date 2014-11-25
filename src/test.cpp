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

	return 0;
}

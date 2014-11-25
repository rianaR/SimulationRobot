#include <string>
#include "Robot.h"


using namespace std;

Robot::Robot(string direction, Objet objet, Plot plot, Position position,Etat_Robot etatRobot)
: _objet(objet), _plot(plot), _position(position), _etatRobot(etatRobot) {
	_direction = direction;
}

void Robot::tourner(string direction){
	_direction=direction;
	_etatRobot=_etatRobot.tourner();
}

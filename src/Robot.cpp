#include <string>
#include "Robot.h"


using namespace std;

Robot::Robot(string direction, Objet objet, Plot plot, Position position)
: _objet(objet), _plot(plot), _position(position) {
	_direction = direction;
}


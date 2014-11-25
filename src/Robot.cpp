#include <string>
#include <sstream>
#include "Robot.h"

using namespace std;

Robot::Robot(string direction, Objet objet, Plot plot, Position position,Etat_Robot* etatRobot)
: _objet(objet), _plot(plot), _position(position), _etatRobot(etatRobot) {
	_direction = direction;
}

Robot::Robot(string direction, Objet objet, Plot plot, Position position)
: _objet(objet), _plot(plot), _position(position) {
	_direction = direction;
}


void Robot::tourner(string direction){
	_direction=direction;
	_etatRobot=_etatRobot->tourner();
}

string Robot::toString() {
    stringstream sstream;
//    string res;
    sstream<<"Ma direction : "<<_direction<<endl;
    sstream<<"Poids de mon objet : "<<_objet.getPoids()<<endl;
    sstream<<"Hauteur de mon plot : "<<_plot.getHauteur()<<endl;
    sstream<<"Position actuelle : " << _position.getX()<<" ; " << _position.getY()<<endl;
    return sstream.str();

}

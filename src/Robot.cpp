
#include <string>
#include <sstream>
#include "Robot.h"
#include <cstdio>

using namespace std;

Robot::Robot(string direction, Objet objet, Plot plot, Position position,EtatRobot* etatRobot)
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

void Robot::figer() {
    _etatRobotAvantFige = _etatRobot;
    _etatRobot=_etatRobot->figer();
}

void Robot::repartir(){
    _etatRobot=_etatRobotAvantFige;
}

void Robot::rencontrerPlot(){
    _etatRobot=_etatRobot->rencontrerPlot();
}

void Robot::avancer(int x, int y){

    try {
        _etatRobot->avancer();
        _position.setX(x);
        _position.setY(y);
    }
    catch(IllegalCommandException e){
        throw IllegalCommandException();
    }
}

string Robot::toString() {
    stringstream sstream;
//    string res;
    sstream<<"Ma direction : "<<_direction<<endl;
    sstream<<"Poids de mon objet : "<<_objet.getPoids()<<endl;
    sstream<<"Hauteur de mon plot : "<<_plot.getHauteur()<<endl;
    sstream<<"Position actuelle : " << _position.getX()<<" ; " << _position.getY()<<endl;
    sstream<<"Etat Robot : " << _etatRobot->getName()<<endl;
    return sstream.str();

}

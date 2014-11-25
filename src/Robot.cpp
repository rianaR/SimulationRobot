
#include <string>
#include <sstream>
#include "Robot.h"
#include <cstdio>
    
using namespace std;

Robot::Robot(string direction, Objet *objet, Plot *plot, Position *position,EtatRobot* etatRobot)
: _objet(objet), _plot(plot), _position(position), _etatRobot(etatRobot) {
	_direction = direction;
}

Robot::Robot(string direction, Objet *objet, Plot *plot, Position *position)
: _objet(objet), _plot(plot), _position(position) {
	_direction = direction;
}


void Robot::tourner(string direction){
	_direction=direction;
	_etatRobot=_etatRobot->tourner();
    notifierAfficheurs();
}

void Robot::figer() {
    _etatRobotAvantFige = _etatRobot;
    _etatRobot=_etatRobot->figer();
    notifierAfficheurs();
}

void Robot::repartir(){
    try{
        _etatRobot->repartir();
        _etatRobot=_etatRobotAvantFige;
        notifierAfficheurs();
    }
    catch(IllegalCommandException e){
        throw IllegalCommandException();
    }
}

void Robot::rencontrerPlot(Plot* p){
    try {
        _etatRobot=_etatRobot->rencontrerPlot();
        _plot = p;
        notifierAfficheurs();
    }catch(IllegalCommandException e){
        throw IllegalCommandException();
    }    
}

void Robot::saisir(Objet* o){
    try {
        _etatRobot = _etatRobot->saisir();
        _objet = o;
        notifierAfficheurs();
    
    }catch(IllegalCommandException e){
        throw IllegalCommandException();
    }    
}



void Robot::poser(){
    try {
        _etatRobot = _etatRobot->poser();
        notifierAfficheurs();
    }catch(IllegalCommandException e){
        throw IllegalCommandException();
    }    
}


int Robot::peser() {

    try {

        _etatRobot->peser();
        notifierAfficheurs();
        return _objet->getPoids();


    }catch(IllegalCommandException e){
        throw IllegalCommandException();
    }
}

int Robot::evaluerPlot(){
    try {
        _etatRobot->evaluerPlot();
        notifierAfficheurs();
        return _plot->getHauteur();
    }
    catch(IllegalCommandException e){
        throw IllegalCommandException();
    }
}

void Robot::avancer(int x, int y){

    try {
        _etatRobot->avancer();
        _position->setX(x);
        _position->setY(y);
        notifierAfficheurs();
    }
    catch(IllegalCommandException e){
        throw IllegalCommandException();
    }
}

/*string Robot::toString() {
    stringstream sstream;
//    string res;
    sstream<<"Ma direction : "<<_direction<<endl;
    sstream<<"Poids de mon objet : "<<_objet.getPoids()<<endl;
    sstream<<"Hauteur de mon plot : "<<_plot.getHauteur()<<endl;
    sstream<<"Position actuelle : " << _position.getX()<<" ; " << _position.getY()<<endl;
    sstream<<"Etat Robot : " << _etatRobot->getName()<<endl;
    return sstream.str();
}*/

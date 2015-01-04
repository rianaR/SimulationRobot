

#include <sstream>
#include "Robot.h"
#include <cstdio>
#include <string>    
using namespace std;

Robot::Robot(string direction, Objet *objet, Plot *plot, Position *position,EtatRobot* etatRobot)
: _objet(objet), _plot(plot), _position(position), _etatRobot(etatRobot) {
	_derniereCommande="aucune";
    _direction = direction;
}

Robot::Robot(string direction, Objet *objet, Plot *plot, Position *position)
: _objet(objet), _plot(plot), _position(position) {
    _derniereCommande="aucune";
	_direction = direction;
}

Robot::Robot(string direction, Position *position, EtatRobot *etatRobot)
:  _position(position), _etatRobot(etatRobot) {
    _derniereCommande="aucune";
    _objet = new Objet();
    _plot = new Plot();
    _direction=direction;
}


void Robot::tourner(string direction){
	_direction=direction;
    _plot=new Plot(0);
	_etatRobot=_etatRobot->tourner();
    _derniereCommande="tourner";
    notifierAfficheurs();
}

void Robot::figer() {
    _etatRobotAvantFige = _etatRobot;
    _etatRobot=_etatRobot->figer();
    _derniereCommande="figer";
    notifierAfficheurs();
}

void Robot::repartir(){
    try{
        _etatRobot->repartir();
        _etatRobot=_etatRobotAvantFige;
        _derniereCommande="repartir";
        notifierAfficheurs();
    }
    catch(const IllegalCommandException& e){
        cout << e.what() << endl;
    }
}

void Robot::rencontrerPlot(Plot* p){
    try {
        _etatRobot=_etatRobot->rencontrerPlot();
        _plot = p;
        _derniereCommande="rencontrer plot";
        notifierAfficheurs();
    }catch(const IllegalCommandException& e){
        cout << e.what() << endl;
    }    
}

void Robot::saisir(Objet* o){
    try {
        _etatRobot = _etatRobot->saisir();
        _objet = o;
        _derniereCommande="saisir";
        notifierAfficheurs();
    
    }catch(const IllegalCommandException& e){
        cout << e.what() << endl;
    }    
}



void Robot::poser(){
    try {
        _etatRobot = _etatRobot->poser();
        _objet=new Objet();
        _derniereCommande="poser";
        notifierAfficheurs();
    }
    catch(const IllegalCommandException& e){
        cout << e.what() << endl;
    }
}


int Robot::peser() {

    try {

        _etatRobot->peser();
        _derniereCommande="peser";
        notifierAfficheurs();
        return _objet->getPoids();


    }catch(const IllegalCommandException& e){
        cout << e.what() << endl;
        return 0;
    }
}

int Robot::evaluerPlot(){
    try {
        _etatRobot->evaluerPlot();
        _derniereCommande="evaluer plot";
        notifierAfficheurs();
        return _plot->getHauteur();
    }
    catch(const IllegalCommandException& e){
        cout << e.what() << endl;
        return 0;
    }
}

void Robot::avancer(int x, int y){

    try {
        _etatRobot->avancer();

        _position->setX(x);
        _position->setY(y);
        _derniereCommande="avancer";
        notifierAfficheurs();
    }
    catch(const IllegalCommandException& e){
        cout << e.what() << endl;
    }
}


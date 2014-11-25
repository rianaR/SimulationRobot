#include <iostream>
#include <string>

#include "AfficheurTraceRobot.h"

using namespace std;

void AfficheurTraceRobot::afficher() {

	string direction=_robot->getDirection();
	int poids = _robot->getObjet().getPoids();
	int hauteur = _robot->getPlot().getHauteur();
	int x = _robot->getPosition().getX();
	int y = _robot->getPosition().getY();
	string nomEtatRobot = _robot->getEtatRobot()->getName();
    cout<<"Ma direction : "<< direction <<endl;
    cout<<"Poids de mon objet : "<<poids<<endl;
    cout<<"Hauteur de mon plot : "<<hauteur<<endl;
    cout<<"Position actuelle : " << x <<" ; " << y <<endl;
    cout<<"Etat Robot : " << nomEtatRobot <<endl;

}
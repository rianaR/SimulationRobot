#include <iostream>
#include <string>

#include "AfficheurTraceRobot.h"

using namespace std;

void AfficheurTraceRobot::afficher() {
	string derniereCommande = _robot->getDerniereCommande();
	string direction=_robot->getDirection();
	string poids = (_robot->getObjet().getPoids()==0 ? 
					"Aucun objet associé" : 
					to_string(_robot->getObjet().getPoids()));

	string hauteur = (_robot->getPlot().getHauteur() == 0 ? 
					"Aucun plot associé" :
					to_string(_robot->getPlot().getHauteur()));

	int x = _robot->getPosition().getX();
	int y = _robot->getPosition().getY();

	string nomEtatRobot = _robot->getEtatRobot()->getName();
	cout << endl;
	cout << "********** Etat courant du robot ***************" << endl;
	cout << "Commande appelée : " << derniereCommande << endl;
    cout << "Ma direction : "<< direction << endl;
    cout << "Poids de mon objet : "<< poids << endl;
    cout << "Hauteur de mon plot : "<< hauteur << endl;
    cout << "Position actuelle : " << x <<" ; " << y << endl;
    cout << "Etat Robot : " << nomEtatRobot << endl;
	cout << "************************************************" << endl;

}
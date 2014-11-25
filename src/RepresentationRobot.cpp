#include "RepresentationRobot.h"

#include <iostream>
#include <algorithm>

using namespace std;

RepresentationRobot::RepresentationRobot() {

}

RepresentationRobot::RepresentationRobot(vector<Afficheur*> afficheurs) : 
	_afficheurs(afficheurs)
{

}

void RepresentationRobot::attacherAfficheur(Afficheur* afficheur) {
	_afficheurs.push_back(afficheur);
}
void RepresentationRobot::detacherAfficheur(Afficheur* afficheur) {
	remove(_afficheurs.begin(),_afficheurs.end(),afficheur);
}
void RepresentationRobot::notifierAfficheurs() {
	for (auto it : _afficheurs) {
		it->afficher();
	}
}
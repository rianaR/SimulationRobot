#include "EtatRobotAVide.h"
using namespace std;
#include <string>

bool EtatRobotAVide::instanceFlag=false;
EtatRobotAVide* EtatRobotAVide::instance=NULL;

EtatRobotAVide* EtatRobotAVide::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotAVide();
		instanceFlag=true;

	}
	
	return instance;

}

Etat_Robot *EtatRobotAVide::tourner(){
	return this;
}

string EtatRobotAVide::getName(){
	return "A vide";
}
#include "EtatRobotAVide.h"
#include <string>
using namespace std;

bool EtatRobotAVide::instanceFlag=false;
EtatRobotAVide* EtatRobotAVide::instance=NULL;

EtatRobotAVide* EtatRobotAVide::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotAVide();
		instanceFlag=true;

	}
	
	return instance;

}

EtatRobot *EtatRobotAVide::tourner(){
	return this;
}

string EtatRobotAVide::getName(){
	return "A vide";
}
#include "EtatRobotAVide.h"
#include "EtatRobotAVideFacePlot.h"
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

EtatRobot *EtatRobotAVide::rencontrerPlot(){
	return EtatRobotAVideFacePlot::getInstance();
}

string EtatRobotAVide::getName(){
	return "A vide";
}
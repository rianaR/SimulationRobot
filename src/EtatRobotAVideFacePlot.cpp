#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotAVide.h"
#include "EtatRobotEnChargeFacePlot.h"
#include <string>
using namespace std;


bool EtatRobotAVideFacePlot::instanceFlag=false;
EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::instance=NULL;

EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotAVideFacePlot();
		instanceFlag=true;

	}
	
	return instance;

}

EtatRobot *EtatRobotAVideFacePlot::tourner(){
	return EtatRobotAVide::getInstance();
}

string EtatRobotAVideFacePlot::getName(){
	return "A vide Face Plot";
}
EtatRobot* EtatRobotAVideFacePlot::saisir(){return EtatRobotEnChargeFacePlot::getInstance(); }
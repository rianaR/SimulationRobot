#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotEnCharge.h"

bool EtatRobotEnCharge::instanceFlag=false;
EtatRobotEnCharge* EtatRobotEnCharge::instance=NULL;

EtatRobotEnCharge* EtatRobotEnCharge::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotEnCharge();
		instanceFlag=true;

	}
	
	return instance;

}

Etat_Robot *EtatRobotEnCharge::tourner(){
	return EtatRobotEnChargeFacePlot::getInstance();
}

string EtatRobotEnCharge::getName(){
	return "En charge";
}
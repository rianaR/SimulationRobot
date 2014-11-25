#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotEnCharge.h"

bool EtatRobotEnChargeFacePlot::instanceFlag=false;
EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::instance=NULL;

EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotEnChargeFacePlot();
		instanceFlag=true;

	}
	
	return instance;

}

Etat_Robot *EtatRobotEnChargeFacePlot::tourner(){
	return EtatRobotEnCharge::getInstance();
}


string EtatRobotEnChargeFacePlot::getName(){
	return "En carge face plot";
}
#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotEnCharge.h"
#include <string>
using namespace std;

bool EtatRobotEnChargeFacePlot::instanceFlag=false;
EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::instance=NULL;

EtatRobotEnChargeFacePlot* EtatRobotEnChargeFacePlot::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotEnChargeFacePlot();
		instanceFlag=true;

	}
	
	return instance;

}

EtatRobot *EtatRobotEnChargeFacePlot::tourner(){
	return EtatRobotEnCharge::getInstance();
}


string EtatRobotEnChargeFacePlot::getName(){
	return "En carge face plot";
}
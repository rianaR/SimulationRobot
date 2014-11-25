#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotEnCharge.h"
#include <string>
using namespace std;

bool EtatRobotEnCharge::instanceFlag=false;
EtatRobotEnCharge* EtatRobotEnCharge::instance=NULL;

EtatRobotEnCharge* EtatRobotEnCharge::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotEnCharge();
		instanceFlag=true;

	}
	
	return instance;

}

EtatRobot *EtatRobotEnCharge::rencontrerPlot(){
	return EtatRobotEnChargeFacePlot::getInstance();
}

EtatRobot *EtatRobotEnCharge::tourner(){
	return EtatRobotEnChargeFacePlot::getInstance();
}

string EtatRobotEnCharge::getName(){
	return "En charge";
}
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotAVide.h"


bool EtatRobotAVideFacePlot::instanceFlag=false;
EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::instance=NULL;

EtatRobotAVideFacePlot* EtatRobotAVideFacePlot::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotAVideFacePlot();
		instanceFlag=true;

	}
	
	return instance;

}

Etat_Robot *EtatRobotAVideFacePlot::tourner(){
	return EtatRobotAVide::getInstance();
}

string EtatRobotAVideFacePlot::getName(){
	return "A vide Face Plot";
}
#ifndef DEF_EtatRobotEnChargeFacePlot
#define DEF_EtatRobotEnChargeFacePlot

#include <iostream>
#include <string>
#include "Etat_Robot.h"
#include "Etat_Robot_En_Route.h"
using namespace std;

class EtatRobotEnChargeFacePlot: public Etat_Robot_En_Route {

	public :
		
		static EtatRobotEnChargeFacePlot* getInstance();
		Etat_Robot* tourner();
		string getName();
		
		
	private :
		static bool instanceFlag;
		static EtatRobotEnChargeFacePlot *instance;
		EtatRobotEnChargeFacePlot(){

		};
		

};

#endif
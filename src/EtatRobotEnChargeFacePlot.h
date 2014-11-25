#ifndef DEF_EtatRobotEnChargeFacePlot
#define DEF_EtatRobotEnChargeFacePlot

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotEnChargeFacePlot: public EtatRobotEnRoute {

	public :
		
		static EtatRobotEnChargeFacePlot* getInstance();
		EtatRobot* tourner();
		std::string getName();
		EtatRobot *rencontrerPlot(){throw IllegalCommandException();}
		//virtual EtatRobot* figer() {return this->figer();}
		
	private :
		static bool instanceFlag;
		static EtatRobotEnChargeFacePlot *instance;
		EtatRobotEnChargeFacePlot(){

		};
		

};

#endif
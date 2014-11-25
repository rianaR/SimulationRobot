#ifndef DEF_EtatRobotEnChargeFacePlot
#define DEF_EtatRobotEnChargeFacePlot

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"
#include "EtatRobotAVideFacePlot.h"

class EtatRobotEnChargeFacePlot: public EtatRobotEnRoute {

	public :
		
		static EtatRobotEnChargeFacePlot* getInstance();
		EtatRobot* tourner();
		std::string getName();
		EtatRobot *rencontrerPlot(){throw IllegalCommandException();}
		void avancer(){throw IllegalCommandException();}
		//virtual EtatRobot* figer() {return this->figer();}
		void peser(){};

		EtatRobot *poser();
	private :
		static bool instanceFlag;
		static EtatRobotEnChargeFacePlot *instance;
		EtatRobotEnChargeFacePlot(){

		};
		

};

#endif
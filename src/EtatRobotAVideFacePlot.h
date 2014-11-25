#ifndef DEF_ETATROBOTAVIDEFACEPLOT
#define DEF_ETATROBOTAVIDEFACEPLOT

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"
#include "EtatRobotEnCharge.h"


class EtatRobotAVideFacePlot: public EtatRobotEnRoute  {

	public :
		
		static EtatRobotAVideFacePlot* getInstance();
		EtatRobot* tourner();
		std::string getName();
		EtatRobot *rencontrerPlot(){throw IllegalCommandException();}
		void avancer(){throw IllegalCommandException();}
		//virtual EtatRobot* figer() {return this->figer();}
		EtatRobot *saisir(){return EtatRobotEnCharge::getInstance(); }
		
	private :
		static bool instanceFlag;
		static EtatRobotAVideFacePlot *instance;
		EtatRobotAVideFacePlot(){

		};


};

#endif
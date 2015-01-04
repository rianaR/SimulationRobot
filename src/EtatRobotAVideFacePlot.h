#ifndef DEF_ETATROBOTAVIDEFACEPLOT
#define DEF_ETATROBOTAVIDEFACEPLOT

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnChargeFacePlot.h"

class EtatRobotAVideFacePlot: public EtatRobotEnRoute  {

	public :
		
		static EtatRobotAVideFacePlot* getInstance();
		EtatRobot* tourner();
		std::string getName();
		EtatRobot *rencontrerPlot(){throw IllegalCommandException("rencontrerPlot");}
		void avancer(){throw IllegalCommandException("avancer");}
		//virtual EtatRobot* figer() {return this->figer();}
		EtatRobot *saisir();
		void evaluerPlot(){};
	private :
		static bool instanceFlag;
		static EtatRobotAVideFacePlot *instance;
		EtatRobotAVideFacePlot(){

		};


};

#endif
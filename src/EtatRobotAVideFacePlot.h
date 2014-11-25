#ifndef DEF_ETATROBOTAVIDEFACEPLOT
#define DEF_ETATROBOTAVIDEFACEPLOT

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVideFacePlot: public EtatRobotEnRoute  {

	public :
		
		static EtatRobotAVideFacePlot* getInstance();
		EtatRobot* tourner();
		std::string getName();
		
		
	private :
		static bool instanceFlag;
		static EtatRobotAVideFacePlot *instance;
		EtatRobotAVideFacePlot(){

		};


};

#endif
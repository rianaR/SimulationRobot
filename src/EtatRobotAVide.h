#ifndef DEF_ETATROBOTAVIDE
#define DEF_ETATROBOTAVIDE

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVide: public EtatRobotEnRoute {

	public :
		
		static EtatRobotAVide* getInstance();
		EtatRobot* tourner();
		EtatRobot* rencontrerPlot();
		std::string getName();
		void avancer(){};
		
	private :
		static bool instanceFlag;
		static EtatRobotAVide *instance;
		EtatRobotAVide(){

		}
		

};

#endif
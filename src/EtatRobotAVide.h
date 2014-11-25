#ifndef DEF_ETATROBOTAVIDE
#define DEF_ETATROBOTAVIDE

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVide: public EtatRobotEnRoute {

	public :
		
		static EtatRobotAVide* getInstance();
		EtatRobot* tourner();
		std::string getName();
		
		
	private :
		static bool instanceFlag;
		static EtatRobotAVide *instance;
		EtatRobotAVide(){

		}
		

};

#endif
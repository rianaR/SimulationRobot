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
		//virtual EtatRobot* figer() {return this->figer();}
	private :
		static bool instanceFlag;
		static EtatRobotAVide *instance;
		EtatRobotAVide(){

		}
		

};

#endif
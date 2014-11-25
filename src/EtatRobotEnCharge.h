#ifndef DEF_EtatRobotEnCharge
#define DEF_EtatRobotEnCharge

#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"
class EtatRobotEnCharge:  public EtatRobotEnRoute {

	public :
		
		static EtatRobotEnCharge* getInstance();
		EtatRobot* tourner();
		std::string getName();
		
		//virtual EtatRobot* figer() {return this->figer();}	
	private :
		static bool instanceFlag;
		static EtatRobotEnCharge *instance;
		EtatRobotEnCharge(){

		};
		

};

#endif
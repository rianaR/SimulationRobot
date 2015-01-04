#ifndef _ETAT_ROBOT_FIGE_H_
#define _ETAT_ROBOT_FIGE_H_

#include "EtatRobot.h"
#include <iostream>

class EtatRobotFige : public EtatRobot {
	public :
		
		
		static EtatRobotFige* getInstance();
		std::string getName();
		virtual EtatRobot *figer(){throw IllegalCommandException("figer");}
		EtatRobot *rencontrerPlot(){throw IllegalCommandException("rencontrerPlot");}
		void avancer(){throw IllegalCommandException("avancer");}
		void repartir(){}
	private :
		static bool instanceFlag;
		static EtatRobotFige *instance;
		EtatRobotFige(){

		}
		

};

#endif
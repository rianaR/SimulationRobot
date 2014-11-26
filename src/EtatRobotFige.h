#ifndef _ETAT_ROBOT_FIGE_H_
#define _ETAT_ROBOT_FIGE_H_

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
	public :
		
		
		static EtatRobotFige* getInstance();
		std::string getName();
		virtual EtatRobot *figer();
		EtatRobot *rencontrerPlot(){throw IllegalCommandException();}
		void avancer(){throw IllegalCommandException();}
		void repartir(){}
	private :
		static bool instanceFlag;
		static EtatRobotFige *instance;
		EtatRobotFige(){

		}
		

};

#endif
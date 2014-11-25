#ifndef _ETAT_ROBOT_FIGE_H_
#define _ETAT_ROBOT_FIGE_H_

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
	public :
		

		static EtatRobotFige* getInstance();
		std::string getName();
		virtual EtatRobot *figer();
		
		
	private :
		static bool instanceFlag;
		static EtatRobotFige *instance;
		EtatRobotFige(){

		}
		

};

#endif
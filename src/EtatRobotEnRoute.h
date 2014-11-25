#ifndef DEF_ETATROBOTENROUTE
#define DEF_ETATROBOTENROUTE

#include "EtatRobot.h"

class EtatRobotEnRoute: public EtatRobot {

	public:
		
		virtual EtatRobot *figer();
		

	protected:
		EtatRobotEnRoute() {}
		~EtatRobotEnRoute() {}

};

#endif

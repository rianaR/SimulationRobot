#ifndef DEF_ETATROBOTAVIDEFACEPLOT
#define DEF_ETATROBOTAVIDEFACEPLOT

#include <iostream>
#include <string>
#include "Etat_Robot.h"
#include "Etat_Robot_En_Route.h"
using namespace std;

class EtatRobotAVideFacePlot: public Etat_Robot_En_Route  {

	public :
		
		static EtatRobotAVideFacePlot* getInstance();
		Etat_Robot* tourner();
		string getName();
		
		
	private :
		static bool instanceFlag;
		static EtatRobotAVideFacePlot *instance;
		EtatRobotAVideFacePlot(){

		};


};

#endif
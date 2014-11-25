#ifndef DEF_ETATROBOTAVIDE
#define DEF_ETATROBOTAVIDE

#include <iostream>
#include <string>
#include "Etat_Robot.h"
#include "Etat_Robot_En_Route.h"
using namespace std;

class EtatRobotAVide: public Etat_Robot_En_Route {

	public :
		
		static EtatRobotAVide* getInstance();
		Etat_Robot* tourner();
		string getName();
		
		
	private :
		static bool instanceFlag;
		static EtatRobotAVide *instance;
		EtatRobotAVide(){

		};
		

};

#endif
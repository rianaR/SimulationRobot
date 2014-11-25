#ifndef DEF_EtatRobotEnCharge
#define DEF_EtatRobotEnCharge

#include <iostream>
#include <string>
#include "Etat_Robot.h"
#include "Etat_Robot_En_Route.h"
using namespace std;

class EtatRobotEnCharge:  public Etat_Robot_En_Route {

	public :
		
		static EtatRobotEnCharge* getInstance();
		Etat_Robot* tourner();
		string getName();
		
		
	private :
		static bool instanceFlag;
		static EtatRobotEnCharge *instance;
		EtatRobotEnCharge(){

		};
		

};

#endif
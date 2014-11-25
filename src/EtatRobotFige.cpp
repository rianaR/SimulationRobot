#include <string>
#include <iostream>
#include "EtatRobot.h"
#include "EtatRobotFige.h"

using namespace std;

bool EtatRobotFige::instanceFlag=false;
EtatRobotFige* EtatRobotFige::instance=NULL;

EtatRobotFige* EtatRobotFige::getInstance(){
	if (! instanceFlag){
		instance = new EtatRobotFige();
		instanceFlag=true;

	}
	
	return instance;

}

string EtatRobotFige::getName(){
	return "Figé";
}

EtatRobot *EtatRobotFige::figer() {
	cout << "Exception figé" << endl;
	throw IllegalCommandException();
}
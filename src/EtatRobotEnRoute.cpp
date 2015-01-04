#include <string>
#include <iostream>
#include "EtatRobotEnRoute.h"
#include "EtatRobotFige.h"

using namespace std;

EtatRobot *EtatRobotEnRoute::figer() {
	return EtatRobotFige::getInstance();
}

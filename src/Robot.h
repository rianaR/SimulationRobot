#include <iostream>
#include <string>
#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "Etat_Robot.h"

#ifndef _ROBOT_H_
#define _ROBOT_H_

using namespace std;

class Robot {
	private :
		string _direction;
		Objet _objet;
		Plot _plot;
		Position _position;
		Etat_Robot _etatRobot;
	public :

	Robot();
	Robot(string, Objet, Plot, Position, Etat_Robot);
	void avancer();
	void tourner(string);

};

#endif

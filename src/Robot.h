#ifndef _ROBOT_H_
#define _ROBOT_H_


#include <iostream>
#include <string>
#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "Etat_Robot.h"
using namespace std;



class Robot {
	private :
		std::string _direction;
		Objet _objet;
		Plot _plot;
		Position _position;
		Etat_Robot *_etatRobot;
	public :

	Robot();

	Robot (string, Objet, Plot, Position,Etat_Robot*);
	Robot (string, Objet, Plot, Position);
	void avancer();
	void tourner(string);

		std::string toString();

};

#endif

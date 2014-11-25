#ifndef _ROBOT_H_
#define _ROBOT_H_


#include <iostream>
#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "EtatRobot.h"



class Robot {
	private :
		std::string _direction;
		Objet _objet;
		Plot _plot;
		Position _position;
		EtatRobot *_etatRobot;
	public :

	Robot();

	Robot (std::string, Objet, Plot, Position,EtatRobot*);
	Robot (std::string, Objet, Plot, Position);
	void avancer();
	void tourner(std::string);
	void figer();
	std::string toString();

};

#endif

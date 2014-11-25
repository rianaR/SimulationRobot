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
		EtatRobot *_etatRobotAvantFige;
	public :
class IllegalCommandException{};
	Robot();

	Robot (std::string, Objet, Plot, Position,EtatRobot*);
	Robot (std::string, Objet, Plot, Position);
	void avancer(int ,int);
	void tourner(std::string);
	void figer();
	void repartir();
	void rencontrerPlot(Plot);
	int evaluerPlot();
	int peser();
	void poser();
	std::string toString();

};

#endif

#include <iostream>
#include <string>
#include "Objet.h"
#include "Plot.h"
#include "Position.h"


#ifndef _ROBOT_H_
#define _ROBOT_H_


class Robot {
	private :
		std::string _direction;
		Objet _objet;
		Plot _plot;
		Position _position;
	public :
	Robot();
		Robot(std::string, Objet, Plot, Position);
		void avancer();
		std::string toString();
};

#endif

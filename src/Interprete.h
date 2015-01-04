#ifndef _INTERPRETE_H
#define _INTERPRETE_H

#include "Robot.h"
#include "InvalidCommandArgumentsException.h"
#include <string>
#include "Commande.h"

class Commande;

class Interprete {

	protected:
		Robot* _robot;
		Interprete(Robot* robot) : _robot(robot) {};
	public:
		virtual void run()=0;
		virtual int getIntParameter()=0;
		virtual std::string getStringParameter()=0;
		virtual Robot* getRobotPararameter()=0;

};

#endif


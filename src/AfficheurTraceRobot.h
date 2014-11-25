#ifndef _AFFICHEUR_TRACE_ROBOT_H_
#define _AFFICHEUR_TRACE_ROBOT_H_

#include "Afficheur.h"
#include "Robot.h"

class AfficheurTraceRobot : public Afficheur {
	private :
		Robot *_robot;
	public :
		AfficheurTraceRobot(Robot *robot) : _robot(robot) {}
		virtual void afficher();
};

#endif
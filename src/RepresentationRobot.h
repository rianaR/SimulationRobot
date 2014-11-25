#ifndef _REPRESENTATION_ROBOT_H_
#define _REPRESENTATION_ROBOT_H_
#include <vector>
#include "Afficheur.h"


class RepresentationRobot {
	private :
		std::vector<Afficheur*> _afficheurs;
	public :
		RepresentationRobot();
		RepresentationRobot(std::vector<Afficheur*>);
		void attacherAfficheur(Afficheur* afficheur);
		void detacherAfficheur(Afficheur* afficheur);
		virtual void notifierAfficheurs();
};

#endif
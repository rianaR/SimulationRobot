#ifndef _ROBOT_H_
#define _ROBOT_H_


#include <iostream>
#include "Objet.h"
#include "Plot.h"
#include "Position.h"
#include "EtatRobot.h"
#include "RepresentationRobot.h"




class Robot : public RepresentationRobot {
	private :
		std::string _direction;
		Objet *_objet;
		Plot *_plot;
		Position *_position;
		EtatRobot *_etatRobot;
		EtatRobot *_etatRobotAvantFige;
		std::string _derniereCommande;
	public :

		Robot();
		class IllegalCommandException{};
		Robot (std::string, Objet*, Plot*, Position*,EtatRobot*);
		Robot (std::string, Objet*, Plot*, Position*);
		Robot (std::string,Position*,EtatRobot*);
		std::string getDirection() { return _direction;}
		Objet getObjet() {return *_objet;}
		Plot getPlot() {return *_plot;}
		Position getPosition() {return *_position;}
		EtatRobot* getEtatRobot() {return _etatRobot;}
		std::string getDerniereCommande() {return _derniereCommande;}
		void avancer(int ,int);
		void tourner(std::string);
		void figer();
		void repartir();
		void rencontrerPlot(Plot*);
		int evaluerPlot();
		int peser();
		void poser();
		void saisir(Objet*);
		//std::string toString();

};

#endif

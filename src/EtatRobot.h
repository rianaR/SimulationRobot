#ifndef DEF_ETATROBOT
#define DEF_ETATROBOT

#include <string>
#include "IllegalCommandException.h"
class EtatRobot {

	public:

		virtual std::string getName()=0;
		virtual EtatRobot *tourner() { throw IllegalCommandException("tourner");};
		virtual void  peser() { throw IllegalCommandException("peser");}
		virtual void  evaluerPlot() { throw IllegalCommandException("evaluerPlot");}
		virtual EtatRobot *  poser() { throw IllegalCommandException("poser");};
		virtual EtatRobot *figer()=0;
		virtual EtatRobot *rencontrerPlot()=0;
		virtual void repartir()=0;
		virtual void avancer()=0;
		virtual EtatRobot *saisir(){ throw IllegalCommandException("saisir");};
		
	protected:
		EtatRobot() {}
		~EtatRobot() {}

};

#endif

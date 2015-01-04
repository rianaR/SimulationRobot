#ifndef _INTERPRETE_ENTREE_H
#define _INTERPRETE_ENTREE_H

#include "Interprete.h"
#include <iostream>
#include <queue>

class InterpreteEntreeStandard : public Interprete {

	private :
		std::string _nomCommande;
		std::queue<std::string> _parametres;
		std::string _returnValue;
		void getKeyboardInput();

		Commande* creerCommande();
		void clear( std::queue<std::string> &q )
		{
			std::queue<std::string> empty;
			std::swap( q, empty );
		}
	public :

		InterpreteEntreeStandard(Robot *robot) : Interprete(robot) {
		};

		virtual void run();
		virtual int getIntParameter();
		virtual std::string getStringParameter();
		virtual Robot* getRobotPararameter();
		virtual void setReturnValue(std::string);

};

#endif


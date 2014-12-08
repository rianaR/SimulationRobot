#ifndef _INTERPRETE_ENTREE_H
#define _INTERPRETE_ENTREE_H
#include "Commande.h"
#include "Robot.h"
#include "Interprete.h"
#include <string>
#include <vector>
using namespace std;

class Interprete_entree_standard : public Interprete {

	public:

		Interprete_entree_standard(){

		};
		

	private:

	vector<string> input;

	void getKeyboardInput(){
		string sortie;
		cout << "Entrez votre commande :";
		cin >> sortie;
		cout << endl;
		int i =0;
		size_t pos = 0;
		while ((pos = sortie.find(" ")) != std::string::npos) {
    		input.push_back(sortie.substr(0, pos));
    		std::cout << token << std::endl;
    		sortie.erase(0, pos + 1);
		}

		input = sotie;
	}

	void createCommand(){
		Commande::nouvelleCommande(input,this);
	}
			


};

#endif


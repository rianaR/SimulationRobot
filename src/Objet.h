#ifndef _OBJET_H_
#define _OBJET_H_
using namespace std;

class Objet {
	 private :
	 	int _poids;
	 public :
	 	Objet(int);
	 	int getPoids() {
	 		return _poids;
	 	}
	 	
};

#endif
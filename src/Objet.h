#ifndef _OBJET_H_
#define _OBJET_H_

class Objet {
	 private :
	 	int _poids;
	 public :
	 	Objet();
	 	Objet(int);
	 	int getPoids() {
	 		return _poids;
	 	}

};

#endif

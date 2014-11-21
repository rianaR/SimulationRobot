#ifndef _PLOT_H_
#define _PLOT_H_
using namespace std;

class Plot {
	private :
		int _hauteur;
	public :
		Plot(int);
		int getHauteur() { return _hauteur; };
};

#endif
#ifndef DEF_ETATROBOT
#define DEF_ETATROBOT
using namespace std;
#include <string>
class Etat_Robot {

	public:
		virtual string getName(){};
		virtual Etat_Robot *tourner(){};

	private:


};

#endif

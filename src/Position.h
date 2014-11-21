#ifndef _POSITION_H_
#define _POSITION_H_
using namespace std;

class Position {
	private :
		int _x;
		int _y;
	public :
		Position(int,int);
		void setX(int x) { _x=x; }
		void setY(int y) { _y=y; }
		int getX() {return _x;}
		int getY() {return _y;}
};

#endif
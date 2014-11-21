#include "Robot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"

#include <iostream>
using namespace std;

int main() {
	Objet objet(5);
	cout << objet.getPoids();
	return 0;
}

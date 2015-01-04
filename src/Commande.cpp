#include "Commande.h"

using namespace std;


Commande::Commande(string nomCommande) {
    commandesInscrites()[nomCommande]=this;
    cout << "constr Commande : " << nomCommande << endl;
}

map<string,Commande*>& Commande::commandesInscrites() {
    static map<string,Commande*>* commandesInscrites=new map<string, Commande*>();
    return *commandesInscrites;
}

Commande* Commande::nouvelleCommande(string nomCommande,Interprete *interprete) {
    return commandesInscrites()[nomCommande]->constructeurVirtuel(interprete);
}
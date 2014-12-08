#include "Commande.h"

using namespace std;


Commande::Commande(string nomCommande) {
    commandesInscrites()[nomCommande]=this;
    cout << "constr Commande" << endl;
}

map<string,Commande*>& Commande::commandesInscrites() {
    static map<string,Commande*>* commandesInscrites=new map<string, Commande*>();
    cout << "Commandes inscrites" << endl;
    return *commandesInscrites;
}

Commande* Commande::nouvelleCommande(string nomCommande,Invocateur *invoc) {
    return commandesInscrites()[nomCommande]->constructeurVirtuel(invoc);
}
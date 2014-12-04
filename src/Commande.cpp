#include "Commande.h"

using namespace std;


Commande::Commande(string nomCommande, Robot *robot) : _robot(robot) {
    commandesInscrites()[nomCommande]=this;
    cout << "constr Commande" << endl;
};

map<string,Commande*>& Commande::commandesInscrites() {
    static map<string,Commande*>* commandesInscrites=new map<string, Commande*>();
    cout << "Commandes inscrites" << endl;
    return *commandesInscrites;
}

Commande* Commande::nouvelleCommande(string nomCommande, Robot* robot,vector<string> params) {
    cout << "Nouvelle commande" << endl;
    Commande *com = commandesInscrites()[nomCommande];
    cout << "lel" << endl;
    return com->constructeurVirtuel(robot,params);
}
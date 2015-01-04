#include "InterpreteEntreeStandard.h"

using namespace std;


void InterpreteEntreeStandard::getKeyboardInput() {
    clear(_parametres);

    string input;
    getline(cin,input);

    size_t pos=input.find(" ");
    if (pos != std::string::npos) {
        _nomCommande = input.substr(0, pos);
        input.erase(0, pos + 1);
        pos = input.find(" ");

        while (pos != std::string::npos) {
            _parametres.push(input.substr(0,pos));

            input.erase(0, pos+1);
            pos = input.find(" ");
        }
        _parametres.push(input.substr(0,pos));

    }
    else {
        _nomCommande = input;
        _parametres = queue<string>();
    }

}

Commande* InterpreteEntreeStandard::creerCommande(){
    return Commande::nouvelleCommande(_nomCommande,this);
}

int InterpreteEntreeStandard::getIntParameter() {
    int returnParam = stoi(_parametres.front());
    _parametres.pop();
    return returnParam;
}
string InterpreteEntreeStandard::getStringParameter() {
    string param = _parametres.front();
    _parametres.pop();
    return param;
}
Robot* InterpreteEntreeStandard::getRobotPararameter() {
    return _robot;
}

void InterpreteEntreeStandard::run() {
    Commande *commandeCourante;
    cout << "Entrez des commandes pour interagir avec le robot : " << endl;
    while (true) {
        getKeyboardInput();
        try {
            commandeCourante = creerCommande();
            cout << "Commande créée" << endl;
            commandeCourante->execute();
        }
        catch (invalid_argument e) {
            cerr << "Arguments invalides pour la commande "<< _nomCommande << endl;
        }

    }
}

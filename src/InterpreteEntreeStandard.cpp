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

void InterpreteEntreeStandard::setReturnValue(std::string value) {
    _returnValue=value;
}

void InterpreteEntreeStandard::run() {
    Commande *commandeCourante;
    while (true) {
        cout << "Entrez une commande pour interagir avec le robot : " << endl;
        getKeyboardInput();
        try {
            commandeCourante = creerCommande();
            commandeCourante->execute();
        }
        catch (invalid_argument e) {
            cerr << "Arguments invalides pour la commande "<< _nomCommande << endl;
        }

    }
}

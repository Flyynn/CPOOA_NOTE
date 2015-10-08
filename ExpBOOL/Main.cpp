#include "Symbole.h"
#include "VarBool.h"
#include "Non.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Tp compile." << endl;
	cout << "Ajout de deux valeurs booleenes a la table des symboles." << endl;
	cout << "Table avant ajout : " << endl;
	Symbole::afficher();
	Symbole::Add("a", true);
	Symbole::Add("b");
	cout << "Table après ajouter : " << endl;
	Symbole::afficher();

	VarBool a = VarBool("a");
	cout << Symbole::getValeur("a");
	cout << "Valeur de a : " << a.evaluer() << endl;
	Non non = Non(&a);
	cout << non << endl << "Valeur : " << non.evaluer() << endl;

	system("pause");
}

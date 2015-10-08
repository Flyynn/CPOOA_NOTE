#include "Symbole.h"

map<char*, bool> Symbole::tableSymbole;

void Symbole::Add(char* nom, bool b)
{
	tableSymbole[nom] = b;
}

bool Symbole::getValeur(char* nom)
{
	return tableSymbole[nom];
}

void Symbole::afficher()
{
	for (map<char*, bool>::iterator i = tableSymbole.begin(); i != tableSymbole.end(); ++i)
	{
		cout << endl << "Valeur associé au symbole " << i->first << " : " << i->second << endl;
	}
	//On peut utilise for(auto i:tableSymbole)
	//					for(pair<string, bool> i : tableSymbole)
}

void Symbole::supprimerValeur(char* nom)
{
	tableSymbole.erase(nom);
}

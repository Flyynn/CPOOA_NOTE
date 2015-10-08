#pragma once
#include <map>
#include <iostream>
using namespace std;

class Symbole
{
private :
	static map<char*, bool> tableSymbole;

	Symbole(){}
	//~Symbole(); Jamais nécessaire tout les champs sont static il n'y a pas d'objet symbole.
	//Symbole(const Symbole&); Pas possible vu qu'il n y a pas d'autre symbole. C'est un singleton
	//void operator=(const Symbole&); Meme raison.
public :
	static void Add(char* nom, bool b = false);
	static bool getValeur(char* nom);
	static void afficher();
	static void supprimerValeur(char* nom);
};

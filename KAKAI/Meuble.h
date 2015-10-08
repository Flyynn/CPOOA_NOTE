
#ifndef _MEUBLE
#define _MEUBLE

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Element.h"
class Option;

class Meuble : public Element
{
private:
	double prix;
	int hauteur;
	int largeur;
	int profondeur;
	vector<Option*> tabOpt;

public:
	//Constructeurs:
	Meuble();
	Meuble(const string&, const double,const int h=60, const int l=40, const int p=60);
	Meuble(const Meuble&);

	//Destructeur:
	virtual ~Meuble();

	//Accesseurs:
	const double getPrixBase() const;

	const int getHauteur() const;
	void setHauteur(const int);

	const int getLargeur() const;
	void setLargeur(const int);

	const int getProfondeur() const;
	void setProfondeur(const int);

	const int getNbOptions() const;

	//Operateurs:
	const Meuble& operator=(const Meuble &o);
	bool operator==(const Meuble&);
	bool operator!=(const Meuble &m)
	{
		return !(*this == m);
	}
	const Option* operator[](int) const;

	void ajouter(Option*);
	void supprimer(int);

	//Affichage
	friend ostream& operator<<(ostream &, const Meuble&);
	void afficher(ostream&) const;
	
	//Methodes héritées
	const double getPrix() const;
};


#endif
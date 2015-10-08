#ifndef _OPTION
#define _OPTION

#include <iostream>
#include <string>
using namespace std;

#include "Meuble.h"

class Option
{
private:
	string nom;

public:
	//Constructeurs:
	Option();
	Option(const string&);
	Option(const Option&);

	//Destructeur:
	virtual ~Option();

	//Accesseurs:
	const string& getNom() const;
	void setNom(const string&);

	//Operateurs:
	const Option& operator=(const Option &o);
	bool operator==(const Option&);
	bool operator!=(const Option &o)
	{
		return !(*this == o);
	}

	//Affichage
	friend ostream& operator<<(ostream &, const Option&);
	void afficher(ostream &flux) const
	{
		flux << getNom() << endl;
	}


	//
	virtual const double getPrix() const=0;
};


#endif
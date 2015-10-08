#include "Option.h"


//Constructeurs:
Option::Option() :
	nom("")
{
}
Option::Option(const string &n):
	nom(n)

{
}
Option::Option(const Option &o):
	nom(o.nom)
{
}

//Destructeur:
Option::~Option()
{
}

//Accesseurs:
const string& Option::getNom() const
{
	return nom;
}
void Option::setNom(const string &n)
{
	nom = n;
}

//Operateurs:
const Option& Option::operator=(const Option &o)
{
	if (this != &o)
	{
		nom = o.nom;
	}

	return *this;
}
bool Option::operator==(const Option &o)
{
	return nom == o.nom;
}

//Affichage
ostream& operator<<(ostream &f, const Option &o)
{
	o.afficher(f);
	return f;
}


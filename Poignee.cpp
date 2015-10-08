#include "Poignee.h"

//Constructeurs
Poignee::Poignee() :
	Option(), prix(0)
{
}

Poignee::Poignee(const string &n, const double p) :
	Option(n), prix(p)
{
}

Poignee::Poignee(const Poignee &p) :
	Option(p), prix(p.prix)
{
}

//Destructeur:
Poignee::~Poignee()
{
}

//Accesseurs:
const double Poignee::getPrix() const
{
	return prix;
}
void Poignee::setPrix(const double p)
{
	prix = p;
}

//Operateurs:
const Poignee& Poignee::operator=(const Poignee &p)
{
	if(this != &p)
	{
		Option::operator=(p);
		prix = p.prix;
	}

	return *this;
	
}
bool Poignee::operator==(const Poignee &p)
{
	return (Option::operator==(p) && prix == p.prix);
}

//Affichage
ostream& operator<<(ostream &f, const Poignee &p)
{
	f << p.getNom() << p.getPrix() << endl;
	return f;
}

void Poignee::afficher(ostream &flux)
{
	flux << "Poignee[";
	Option::afficher(flux);
	flux << ";prix=" << prix << "]";
}
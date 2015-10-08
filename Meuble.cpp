#include "Meuble.h"
#include "Option.h"
#include "Exception.h"

Meuble::Meuble() :
	Element(), prix(0), hauteur(0), largeur(0), profondeur(0), tabOpt()
{
}

Meuble::Meuble(const string &d, const double p, const int h, const int l, const int pr) :
	Element(d), prix(p), hauteur(h), largeur(l), profondeur(pr), tabOpt()
{
}

Meuble::Meuble( const Meuble &m) :
	Element(m), prix(m.prix),hauteur(m.hauteur),largeur(m.largeur),profondeur(m.profondeur),
	tabOpt(m.tabOpt)
{
}

//Destructeur:
Meuble::~Meuble()
{
}

//Accesseurs:
const double Meuble::getPrixBase() const
{
	return prix;
}
const int Meuble::getHauteur() const
{
	return hauteur;
}
void Meuble::setHauteur(const int h)
{
	hauteur = h;
}

const int Meuble::getLargeur() const
{
	return largeur;
}
void Meuble::setLargeur(const int l)
{
	largeur=l;
}

const int Meuble::getProfondeur() const
{
	return profondeur;
}
void Meuble::setProfondeur(const int p)
{
	hauteur = p;
}

const int Meuble::getNbOptions() const
{
	return tabOpt.size();
}
//Operateurs:
const Meuble& Meuble::operator=(const Meuble &m)
{
	if (this != &m)
	{
		Element::operator=(m);
		prix = m.prix;
		largeur = m.largeur;
		hauteur = m.hauteur;
		profondeur = m.profondeur;
		tabOpt = m.tabOpt;
	}

	return *this;

}
bool Meuble::operator==(const Meuble &m)
{
	return (Element::operator==(m) && prix == m.prix && largeur==m.largeur && hauteur == m.hauteur && profondeur == m.profondeur);
}
const Option* Meuble::operator[](int i) const
{
	if (i < 0 || i> tabOpt.size())
		throw Exception("Index hors limite");

	return tabOpt[i];
}

void Meuble::ajouter(Option *o)
{
	tabOpt.push_back(o);
}
void Meuble::supprimer(int i)
{
	if (i < 0 || i> tabOpt.size())
		throw Exception("Index hors limite");

	tabOpt.erase(tabOpt.begin() + i);
}



//Affichage
ostream& operator<<(ostream &f, const Meuble &p)
{
	f << p.getDescription() << ";" << p.getPrixBase() << ";" << p.getHauteur() << ";" << p.getLargeur() << ";" << p.getProfondeur() << ";" << p.getPrix() << endl;
	return f;
}

void Meuble::afficher(ostream &flux) const
{
	flux << "Meuble[";
	Element::afficher(flux);
	flux << ";prix de base=" << prix << ";l=" << largeur << ";h=" << hauteur << ";p=" << profondeur << "]" << endl;
	for (int i = 0; i < tabOpt.size(); ++i) {
		flux << *(tabOpt[i]) << endl;
	}
	flux << "---" << endl;
}

//Methodes héritées
const double Meuble::getPrix() const
{
	double prixF = prix;
	for (int i = 0; i < tabOpt.size(); i++)
	{
		prixF = prixF + tabOpt[i]->getPrix();
	}
	return prixF;
}

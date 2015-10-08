
#include "Ilot.h"
#include "Option.h"
#include "Exception.h"

Ilot::Ilot(const string& des)
	: Element(des), tabElt()
{
}

Ilot::Ilot(const Ilot &o)
	: Element(o), tabElt(o.tabElt)
{
}

Ilot::~Ilot() {
}

const Ilot& Ilot::operator=(const Ilot& objet) {
	if (this != &objet) {
		Element::operator =(objet);
		tabElt = objet.tabElt;
	}
	return *this;
}

bool Ilot::operator==(const Ilot& objet) const {

	return tabElt == objet.tabElt;
}

void Ilot::afficher(ostream& flux)	const {
	flux << "Ilot[";
	Element::afficher(flux);
	for (int i = 0; i < tabElt.size(); ++i) {
		flux << *(tabElt[i]) << endl;
	}
	flux << "---" << endl;
}

const double Ilot::getPrix() const {
	double prix = 0;
	for (int i = 0; i < tabElt.size(); ++i) {
		prix = prix + tabElt[i]->getPrix();
	}
	return prix;
}

void Ilot::ajouter(Element* element)
{
	tabElt.push_back(element);
}

Element* Ilot::operator[](const int i)	const
{
	if (i < 0 || i> tabElt.size())
		throw Exception("Index hors limite");

	return tabElt[i];
}

void Ilot::supprimer(int i)
{
	if (i < 0 || i> tabElt.size())
		throw Exception("Index hors limite");

	tabElt.erase(tabElt.begin() + i);
}

int Ilot::getNombreElements()	const
{
	return tabElt.size();
}

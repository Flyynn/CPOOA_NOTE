#include "Element.h"


//Constructeurs:
Element::Element() :
	descrip("")
{
}
Element::Element(const string &d) :
	descrip(d)

{
}
Element::Element(const Element &e) :
	descrip(e.descrip)
{
}

//Destructeur:
Element::~Element()
{
}

//Accesseurs:
const string& Element::getDescription() const
{
	return descrip;
}
void Element::setDescription(const string &d)
{
	descrip = d;
}

//Operateurs:
const Element& Element::operator=(const Element &e)
{
	if (this != &e)
	{
		descrip = e.descrip;
	}

	return *this;
}
bool Element::operator==(const Element &o)
{
	return descrip == o.descrip;
}

//Affichage
ostream& operator<<(ostream &f, const Element &e)
{
	f << e.getDescription() << endl;
	return f;
}

void Element::afficher(ostream& flux) const
{
	flux << "Element[designation=" << descrip << "]";
}

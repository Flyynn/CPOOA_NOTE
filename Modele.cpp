#include "Modele.h"

//Constructeurs
Modele::Modele(const int ii):
	i(ii)
{}

Modele::Modele(const Modele &m):
	i(m.i)
{}

//Destructeurs
Modele::~Modele()
{}

//Accesseurs inlines

//Operateurs
const Modele& Modele::operator=(const Modele &m)
{
	if(this!=&m)
	{
		i=m.i;
	}
	return *this;
}
const bool Modele::operator==(const Modele &m)
{
	return (i==m.i);
}
	// operator!= inline

//Affichage
ostream& operator<<(ostream &f, const Modele &m)
{
	m.afficher(f)
}
void Modele::afficher (ostream &f)
{
	f << m.getI() << endl;
}

//Autres methodes:

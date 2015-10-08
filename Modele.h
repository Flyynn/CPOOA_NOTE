#ifndef MODELE
#define MODELE


#include <iostream>
#include <string>
using namespace std;

#include ...

class Modele
{
private:
	int i;

public:
	//Constructeurs
	Modele(const int i=0);
	Modele(const Modele&);
	
	//Destructeur
	virtual ~Modele();
	
	//Accesseurs
	const int getI() const
	{
		return i;
	}
	void setI(const int ii)
	{
		i=ii;
	}
	
	//Operateurs
	const Modele& operator=(const Modele&);
	const bool operator==(const Modele&)
	const bool operator!=(const Modele &o)
	{
		return !(this==o);
	}
	
	//Affichage
	friend ostream& operator<<(ostream&, const Modele&);
	
	//virtual void afficher(ostream& f) //const=0;
	
	
}

#endif

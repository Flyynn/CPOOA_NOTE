#ifndef _PIED
#define _PIED

#include <iostream>
#include <string.h>
using namespace std;

#include "Option.h"


class Pied : public Option
{
private:
	double prix;

public:
	//Constructeurs:
	Pied();
	Pied(const char*, const double);
	Pied(const Pied&);

	//Destructeur:
	virtual ~Pied();

	//Accesseurs:
	const double getPrix() const;
	void setPrix(const double);

	//Operateurs:
	const Pied& operator=(const Pied &o);
	bool operator==(const Pied&);
	bool operator!=(const Pied &p)
	{
		return !(*this == p);
	}

	//Affichage
	friend ostream& operator<<(ostream &, const Pied&);
};


#endif

#ifndef _POIGNEE
#define _POIGNEE

#include <iostream>
#include <string>
using namespace std;

#include "Option.h"


class Poignee : public Option
{
private:
	double prix;

public:
	//Constructeurs:
	Poignee();
	Poignee(const string&, const double);
	Poignee(const Poignee&);

	//Destructeur:
	virtual ~Poignee();

	//Accesseurs:
	const double getPrix() const;
	void setPrix(const double);

	//Operateurs:
	const Poignee& operator=(const Poignee &o);
	bool operator==(const Poignee&);
	bool operator!=(const Poignee &p)
	{
		return !(*this == p);
	}

	//Affichage
	friend ostream& operator<<(ostream &, const Poignee&);
	void afficher(ostream&);
};


#endif
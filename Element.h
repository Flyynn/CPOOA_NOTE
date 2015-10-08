#ifndef _ELEMENT
#define _ELEMENT

#include <iostream>
#include <string>
using namespace std;


class Element
{
private:
	string descrip;

public:
	//Constructeurs:
	Element();
	Element(const string&);
	Element(const Element&);

	//Destructeur:
	virtual ~Element();

	//Accesseurs:
	const string& getDescription() const;
	void setDescription(const string&);

	//Operateurs:
	const Element& operator=(const Element &o);
	bool operator==(const Element&);
	bool operator!=(const Element &o)
	{
		return !(*this == o);
	}

	//Affichage
	friend ostream& operator<<(ostream &, const Element&);
	virtual void afficher(ostream&) const = 0;

	//
	virtual const double getPrix() const = 0;
};


#endif

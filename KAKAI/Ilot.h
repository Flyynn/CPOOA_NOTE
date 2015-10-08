#ifndef ILOT_H_
#define ILOT_H_

#include	<iostream>
#include	<string>
#include 	<vector>
using namespace std;

#include "Element.h"


class Ilot : public Element {

private:
	/* liste des champs */
	vector<Element*> tabElt;

public:
	Ilot(const Ilot&);
	Ilot(const string&);

	virtual ~Ilot();

	const double getPrix() const;

	int			getNombreElements()	const;
	Element*	operator[](const int i)	const;
	void		ajouter(Element* element);
	void		supprimer(const int i);

	const Ilot& operator=(const Ilot& objet);

	bool 	operator==(const Ilot &objet) const;

	void	afficher(ostream& flux)	const;

};

#endif

#pragma once
#include "ExprBool.h"
#include <string.h>
#include "Symbole.h"

class VarBool : public ExprBool
{
private :
	char* _nom;
public :
	VarBool(char* nom);
	VarBool(const VarBool&);
	~VarBool(){ free(_nom); }

	bool evaluer() const;

	void afficher(ostream& flux) const;

	ExprBool* clone() const;

	friend ostream& operator<<(ostream& flux, VarBool& v);
};
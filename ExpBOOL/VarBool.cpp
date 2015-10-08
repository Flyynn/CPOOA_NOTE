#include "VarBool.h"

VarBool::VarBool(char* nom) :ExprBool()
{
	_nom = strdup(nom);
}
VarBool::VarBool(const VarBool& v) : ExprBool()
{
	_nom = strdup(v._nom);
}
bool VarBool::evaluer() const
{
	return Symbole::getValeur(_nom);
}

void VarBool::afficher(ostream& flux) const
{
	flux << _nom;
}

ExprBool* VarBool::clone() const
{
	return new VarBool(*this);
}

ostream& operator<<(ostream& flux, VarBool& v)
{
	v.afficher(flux);
	return flux;
}
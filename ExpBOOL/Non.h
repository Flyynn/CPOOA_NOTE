#include "ExprBool.h"

class Non : public ExprBool
{
private :
	ExprBool* _op;
public :
	Non(ExprBool* op)
	{
		_op = op->clone();
	}

	Non(const Non& n)
	{
		_op = n._op->clone();
	}

	bool evaluer() const
	{
		return !(_op->evaluer());
	}

	void afficher(ostream& flux) const
	{
		flux << "!";
		_op->afficher(flux);
	}

	ExprBool* clone() const
	{
		return new Non(*this);
	}

	friend ostream& operator<<(ostream& flux, Non& n)
	{
		n.afficher(flux);
		return flux;
	}
};
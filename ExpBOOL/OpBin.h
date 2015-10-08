#include "ExprBool.h"

class OpBin : public ExprBool
{
private :
	ExprBool *_opG, *_opD;
public :
	OpBin(ExprBool *opG, ExprBool *opD)
	{
		_opG = opG->clone();
		_opD = opD->clone();
	}
	OpBin(const OpBin& o)
	{
		_opG = o._opG->clone();
		_opD = o._opD->clone();
	}

	ExprBool* getOpD()
	{
		return _opD;
	}

	ExprBool* getOpG()
	{
		return _opG;
	}
	/*
	virtual ExprBool* clone() const
	{
		return new OpBin(*this);
	}*/
};
#include "OpBin.h"

class Et : public OpBin
{
public :
	Et(ExprBool* opG, ExprBool* opD) :OpBin(opG, opD){}
	Et(const Et& e) : OpBin(e){}
	/*
	bool evaluer() const
	{
		return (getOpG()->evaluer());
	}*/
};
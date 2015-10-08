#pragma once

#include <iostream>
using namespace std;

class ExprBool
{
public :
	ExprBool(){};
	ExprBool(const ExprBool&){}
	virtual ~ExprBool(){};
	virtual bool evaluer() const = 0;
	virtual void afficher(ostream&) const = 0;
	virtual ExprBool* clone() const = 0;
};
#include "Exception.h"


	//Constructeurs:
Exception::Exception(const string &m):
	msg(m)
{
}
	
Exception::Exception(const Exception &e) :
	msg(e.msg)
{
}

	//Destructeur:
Exception::~Exception()
{
}

	//Accesseurs:
const string& Exception::getMsg() const
{
	return msg;
}

	//Operateurs:
const Exception& Exception::operator=(const Exception &e)
{
	{
		if (this != &e)
		{
			msg = e.msg;
		}
		return *this;
	}
}

	//Affichage
ostream & operator << (ostream &f, const Exception &e)
{
	
	f << e.getMsg() << endl;
	return f;
	
}



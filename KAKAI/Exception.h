#ifndef _EXCEPTION
#define _EXCEPTION

#include <iostream>
#include <string>

using namespace std;

class Exception
{
private:
	string msg;

public:
	//Constructeurs:
	Exception(const string&);
	Exception(const Exception&);

	//Destructeur:
	virtual ~Exception();

	//Accesseurs:
	const string& getMsg() const;

	//Operateurs:
	const Exception &operator =(const Exception &e);

	//Affichage
	friend ostream & operator << (ostream &f, const Exception &e);
};

#endif


#include <stdio.h>
#include <stdlib.h>

#include "Option.h"
#include "Poignee.h"

#include "Element.h"
#include "Meuble.h"
#include "Ilot.h"

#include "Exception.h"


int main(int argc, char **argv) 
{
	Poignee	poignee("Poignee bidule", 10);
	cout << poignee << endl;


	Meuble	meuble("Element cuisine 1", 49);
	cout << meuble << endl;
	cout << "Prix du meuble sans options : " << meuble.getPrix() << endl;

	meuble.ajouter(&poignee);
	cout << meuble << endl;
	cout << "Prix du meuble avec options : " << meuble.getPrix() << endl;
	cout << "Nombre d'options : " << meuble.getNbOptions() << endl;
	cout << "Option[0]=" << *(meuble[0]) << endl;

	meuble.supprimer(0);
	try
	{
		meuble.supprimer(50);
	}
	catch(Exception e)
	{
		cout << "Erreur:" << e << endl;
	}
	cout << meuble << endl;
	cout << "Prix du meuble avec options : " << meuble.getPrix() << endl;
	cout << "Nombre d'options : " << meuble.getNbOptions() << endl;

	system("pause");
	return 0;
}

#ifndef personnel_hpp
#define personnel_hpp

#include <iostream>
#include <vector>
#include "employe.hpp"

using namespace std;

class personnel{
	vector<employe*> vecteur;
public:
	personnel(){}
	~personnel(){}
	void embaucher(employe* newbie);
	void licencie(employe* e);
	void licencie();
	void afficher_salaires();
	double salaire_moyen();

	
};

#endif
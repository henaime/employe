#ifndef vendeur_hpp
#define vendeur_hpp

#include <iostream>
#include <string>
#include "commercial.hpp"

class vendeur :public commercial{
public:
	vendeur(string,string,int,int,double);
	~vendeur();
	double calculer_salaire();
	void afficher();
	string type(){return "vendeur";}
	
};

#endif
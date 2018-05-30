#ifndef represantant_hpp
#define represantant_hpp

#include <iostream>
#include <string>
#include "commercial.hpp"
#include "employe.hpp"

class represantant:public commercial{
	int nbr_h;
public:
	represantant(string,string,int,int,double,int);
	~represantant();
	void afficher();
  	double calculer_salaire();
  	double calculer_base_salaire();
  	string type(){return "represantant";}
};

#endif
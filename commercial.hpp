#ifndef commercial_hpp
#define commercial_hpp

#include <iostream>
#include <string>
#include "employe.hpp"

using namespace std;
class commercial:public employe{

  double chiffre_affaire;
  static const double base;
  static const double part;
public:
	commercial(){}
	commercial(string,string,int,int,double);
	virtual double calculer_base_salaire();
	virtual double calculer_salaire();
	virtual void afficher();
	virtual string  type(){return "commercial";}
	bool operator==(commercial& c){
	    return this->employe::operator==(c) and chiffre_affaire==c.chiffre_affaire;
	 }
};

#endif

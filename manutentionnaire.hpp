#ifndef manutentionnaire_hpp
#define manutentionnaire_hpp

#include <iostream>
#include <string>
#include "employe.hpp"

using namespace std;

class manutentionnaire:public employe{
  int nb_heures;
  static const double base_salaire_horaire;
public:
  manutentionnaire(string,string,int,int,int);
  double calculer_base_salaire();
  double calculer_salaire();
  void afficher();
  string type(){return "manutentionnaire";}
  bool operator==(manutentionnaire& m){
	    return this->employe::operator==(m) and nb_heures==m.nb_heures;
	}
};

#endif

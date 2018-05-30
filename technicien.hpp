#ifndef technicien_hpp
#define technicien_hpp

#include <iostream>
#include <string>
#include "employe.hpp"

using namespace std;

class technicien:public employe{
  int nb_unite_produite;
  static const double base;
  static const double part;
  static const double gain_unite;
public:
	technicien(){};
  technicien(const string,const string,int,int,int);
  ~technicien();
  double calculer_base_salaire();
  double calculer_salaire();
  void afficher();
  string type(){return "technicien";}
  bool operator==(technicien& t){
    return this->employe::operator==(t) and nb_unite_produite==t.nb_unite_produite;
  }
};

#endif

#include <iostream>
#include <string>
#include "commercial.hpp"
#include "vendeur.hpp"


vendeur::vendeur(string n,string p,int a,int an,double ca):commercial(n,p,a,an,ca){}

double vendeur::calculer_salaire(){
	return commercial::calculer_salaire();
}
void vendeur::afficher(){
	commercial::afficher();
}

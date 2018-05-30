#include <iostream>
#include <string>
#include "commercial.hpp"

using namespace std;

const double commercial::base=50;
const double commercial::part=30;

commercial::commercial(string nom,string prenom,int age,int anciennete,double chiffre):employe(nom,prenom,age,anciennete){
  chiffre_affaire=chiffre;
}

double commercial::calculer_base_salaire(){
	return base+chiffre_affaire*part;
}

double commercial::calculer_salaire(){
	int anc=employe::get_anciennte();
	return calculer_base_salaire()*(1+0.1*anc);
}

void commercial::afficher(){
  employe::afficher();
  cout<<"le chiffre d'affaire : "<<chiffre_affaire<<endl;
  cout<<"type d'employe : "<<type()<<endl;
  cout<<"la base de salaire : "<<calculer_base_salaire()<<"DH"<<endl;
  cout<<"le salaire : "<<calculer_salaire()<<"DH"<<endl;
}

#include <iostream>
#include <string>
#include "technicien.hpp"


using namespace std;

const double technicien::base=50.5;
const double technicien::part=30.5;
const double technicien::gain_unite=40.5;

technicien::technicien(const string n,const string p,int a,int an,int nb):employe(n,p,a,an){
  nb_unite_produite=nb;
}

double technicien::calculer_base_salaire(){
	return base+nb_unite_produite*part*gain_unite;
}

double technicien::calculer_salaire(){
	int anc=employe::get_anciennte();
	return calculer_base_salaire()*(1+0.1*anc);
}

void technicien::afficher(){
  employe::afficher();
  cout<<"le nombre d'unite produite : "<<nb_unite_produite<<endl;
  cout<<"type d'employe : "<<type()<<endl;
  cout<<"la base de salaire : "<<calculer_base_salaire()<<"DH"<<endl;
  cout<<"le salaire : "<<calculer_salaire()<<"DH"<<endl;
}


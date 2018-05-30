#include <iostream>
#include <string>
#include "manutentionnaire.hpp"

using namespace std;

const double manutentionnaire::base_salaire_horaire=20;

manutentionnaire::manutentionnaire(string n,string p,int a,int an,int nb):employe(n,p,a,an){
  nb_heures=nb;
}

double manutentionnaire::calculer_base_salaire(){
	return base_salaire_horaire*nb_heures;
}

double manutentionnaire::calculer_salaire(){
	int anc=employe::get_anciennte();
	return calculer_base_salaire()*(1+0.1*anc);
}

void manutentionnaire::afficher(){
  employe::afficher();
  cout<<"le nombre d'heure : "<<nb_heures<<endl;
  cout<<"type d'employe : "<<type()<<endl;
  cout<<"la base de salaire : "<<calculer_base_salaire()<<"DH"<<endl;
  cout<<"le salaire : "<<calculer_salaire()<<"DH"<<endl;
}

#include <iostream>
#include <string>
#include "commercial.hpp"
#include "represantant.hpp"
#include "manutentionnaire.hpp"
#include "employe.hpp"

using namespace std;


represantant::represantant(string n,string p,int a,int an,double ca,int nbr):commercial(n,p,a,an,ca){
	nbr_h=nbr;
	//cout<<"represantant constructor"<<endl;
}

double represantant::calculer_base_salaire(){
	employe *m;
	m= new manutentionnaire(m->get_nom(),m->get_prenom(),m->get_age(),m->get_anciennte(),nbr_h);
	return m->get_base()*nbr_h;
}

double represantant::calculer_salaire(){
	int anc=employe::get_anciennte();
	return calculer_base_salaire()*(1+0.1*anc);
}

void represantant::afficher(){
	commercial::afficher();
	cout<<"le nombre d'heure : "<<nbr_h<<endl;
}
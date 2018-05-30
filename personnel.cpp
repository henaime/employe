#include <iostream>
#include <string>
#include <vector>

#include "personnel.hpp"
#include "employe.hpp"

using namespace std;

void personnel::embaucher(employe *newbie){
	vecteur.push_back(newbie);
}


void personnel::licencie(employe *e){
	for(vector<employe*>::iterator it=vecteur.begin();it!=vecteur.end();it++){
		if(*e==(*(*it)))
			vecteur.erase(it);
	}
}
/*
void personnel::licencie(employe *e){
	for(vector<employe*>::iterator it=vecteur.begin();it!=vecteur.end();it++){
		if(e->get_nom()==(*it)->get_nom())
			vecteur.erase(it);
	}
}
*/

void personnel::licencie(){
	for(vector<employe*>::iterator it=vecteur.begin();it!=vecteur.end();it++){
		vecteur.erase(it);
	}
}

void personnel::afficher_salaires(){
	cout<<"================================\n";
	for(vector<employe *>::iterator it=vecteur.begin();it!=vecteur.end();it++){
		cout<<"le salaire du "<<(*it)->type()<<" "<<(*it)->get_nom()<<" "<<(*it)->get_prenom()<<" est : ";
		cout<<(*it)->calculer_salaire()<<"DH"<<endl;
	}
}

double personnel::salaire_moyen(){
	double sum=0;
	int nbr_employe=0;
	for(vector<employe *>::iterator it=vecteur.begin();it!=vecteur.end();it++){
		nbr_employe++;
		sum+=(*it)->calculer_salaire();
	}
	return sum/nbr_employe;
}
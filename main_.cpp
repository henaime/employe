#include <iostream>
#include <string>
#include <vector>

#include "personnel.hpp"
#include "commercial.hpp"
#include "vendeur.hpp"
#include "manutentionnaire.hpp"
#include "technicien.hpp"


int main(){
	personnel p;
	employe *e=new vendeur("chanaa","othmane",40,13,22.2);
	employe *t=new technicien("kezinin","mohamed",28,7,31);
	p.embaucher(new commercial("enaime","hamza",20,2,31.2));
	p.embaucher(new vendeur("alami","anas",22,4,17.2));
	p.embaucher(new technicien("amine","mohamed",21,1,31));
	p.embaucher(new manutentionnaire("loudini","ismail",30,2,31));
	p.embaucher(new commercial("mraihy","yassin",35,10,45.2));
	p.embaucher(e);
	p.embaucher(t);
	p.embaucher(new manutentionnaire("zaza","mouad",19,0,15));
	p.afficher_salaires();
	p.licencie(e);
	p.licencie(t);
	p.afficher_salaires();
	cout<<"salaire moyen est : "<<p.salaire_moyen()<<"DH"<<endl;
	return 0;
}
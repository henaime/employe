#include <iostream>
#include <string>

#include "commercial.hpp"
#include "technicien.hpp"
#include "manutentionnaire.hpp"
#include "employe.hpp"
#include "vendeur.hpp"
//#include "represantant.hpp"

using namespace std;

int main(){
	employe *c,*t,*m;
	commercial *v,*r;
	c=new commercial("enaime","hamza",20,2,54.2);
	m=new manutentionnaire("loudini","ismail",20,2,500);
	t=new technicien("alami","anas",20,5,60);
	v=new vendeur("fariq","omar",24,3,32.2);
	//r=new represantant("reggad","abdeltif",22,2,65.2,45);
	c->afficher();
	m->afficher();
	t->afficher();
	v->afficher();
	//r->afficher();
  	return 0;
}

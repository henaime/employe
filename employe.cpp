#include <iostream>
#include <string>
#include "employe.hpp"

using namespace std;

employe::employe(string n,string p,int a,int an){
  nom=n;
  prenom=p;
  age=a;
  anciennete=an;
}

void employe::afficher(){
	cout<<"=============================================\n";
 	cout<<"nom : "<<nom<<endl<<"prenom :"<<prenom<<endl<<"age : "<<age<<endl<<"anciennete : "<<anciennete<<endl;
}

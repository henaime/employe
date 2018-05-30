#ifndef employe_hpp
#define employe_hpp

#include <iostream>
#include <string>

using namespace std;

class employe{
  string nom;
  string prenom;
  int age;
  int anciennete;
public:
	employe(){}
	employe(string,string,int,int);
	~employe();
	virtual double calculer_base_salaire()=0;
	virtual void afficher();
	virtual double calculer_salaire()=0;
	string get_nom()const {return nom;}
	string get_prenom()const {return prenom;}
	int get_age()const {return age;}
	int get_anciennte()const {return anciennete;}
	virtual string type()=0;
	bool operator==(employe& e){
		return e.nom == nom;
	}
	
	
};

#endif

#include "tp2.hpp"

Chaine::Chaine() : n(0) , val(nullptr)
{
 
 
};
Chaine::Chaine(int taille) : n(taille){
	val=new char[taille+1];
	
};

Chaine::Chaine(const char *tab) : n(strlen(tab)){
	val=new char[n+1];
	strcpy(val,tab);
};
Chaine::Chaine(const Chaine & objet) : n(objet.n) 
{
	val=new char(objet.n);
	strcpy(val ,objet.val);
};
Chaine::~Chaine()
{
	delete[]val;
};


	


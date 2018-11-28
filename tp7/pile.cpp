#include "pile.hpp"
#define TAILLE 

Pile:Pile(int capa) : top(capa) , taille(0) {
  tab = new int[capacite];
}

int Pile::top() const {
	return tab[taille-1];
}
bool Pile::empty() const {
	
	return(taille==0);
}
void Pile::pop() {
	--taille;
}

void Pile::push(const int& el) {
	tab[taille]=el;
	++taille;
}

Pile::~Pile (){
	delete [] tab;
}

Pile &Pile::operator =(const Pile &objet)
{
	if(&objet!= this){
		if(taille !=objet.taille)
		{
			delete[]tab;
			tab=new int[objet.top];
		}
		taille = objet.taille;
		top=objet.top;
		for(int i =0;i<taille;++i)
		{
			tab[i]=objet.tab[i];
		}
	}
	return *this;      
}








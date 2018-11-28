#include "Mere.hpp"

using namespace std;

Mere::Mere()
{ 
	n++;
	cout<<"construction mere : "<< n <<endl;
}

Mere::Mere(string chaine)
{
	chaine = "machaine";
}

Mere::~Mere()
{
	n--;
	cout<<"destruction mere"<< n <<endl;
}

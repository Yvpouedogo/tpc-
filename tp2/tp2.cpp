#include <iostream>
#include <string>
using namespace std;

//lecture dans un flux 
class  Constructeur {
  // ...
  int travail;
  
  public: 
	Bavarde(int nombre){
		x=nombre;
		cout <<"construction de"<< nombre <<endl;
    }
    Bavarde(){
		x=0;
		cout <<"deconstruction de"<< x <<endl;
	}
	int afficher();

} bizarre(1);

Bavarde globale(2);

void fonction(Bavarde b) {
  cout << "construction ";
}
int Bavarde::afficher() {
  return x;
}

int main(int, char **)
{
  Bavarde b;
  Bavarde * p = new Bavarde(3);
  const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];
  fonction(b);
  
  delete p;


  for (int i =0; i < TAILLE; ++i)
  {
     tab1[i].afficher();
     tab2[i].afficher();
  }
  return 0;
}

class Couple{
	Bavarde x;
	Bavarde y;
	public :
	   Couple(Bavarde nombre){
		  
		  cout <<"construction du"<< <<endl;
       }
       Couple(){
}
Couple::Couple(Bavarde u , Bavarde y){
	x(u),y(v)
}       
int main (){
	Couple * p = new Couple
    
	    

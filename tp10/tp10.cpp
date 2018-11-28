#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
#include <stack>
#include <queue>

using namespace std;



/*class MemePasPeur {
   int tab[4];
 public:
   MemePasPeur() {
      tab[0] = 1;
   }
   const int & val() const {
       return tab[0];
   }
   void modify() {
      tab[0] = 4;
   }
};

int main(int, char **) {
  MemePasPeur *p = new MemePasPeur();
  int i = p->val();
  const int & j = p->val();
  std::cout << i << " " << j << std::endl;
  p->modify();
  std::cout << i << " " << j << std::endl;
  delete p;
  std::cout << i << " " << j << std::endl;
  return 0;
}

class Mere {
 public:
  Mere() {
    // cout << "Mere::Mere()" << endl;
    tab = new int[100];
  }
  virtual ~Mere() {
    // cout << "Mere::~Mere()" << endl;
    delete [] tab;
  }
 protected:
  int * tab;
};

class Fille : public Mere {
 public:
   Fille() {
      // cout << "Fille:Fille()" << endl;
      tab = new double[100];
      //Mere::tab[50] = 4;

   }
   ~Fille() {
    // cout << "Fille::~Fille()" << endl;
    delete [] tab;

  }
 protected:
  double * tab;
};

int main(int, char**) {
  Mere * m = new Fille();

  cout << "penser a valgrind" << endl;
  delete m;

  return 0;
}



class Mere {
 public:
  Mere() { m(); }
  virtual void m() { cout << "mm" << endl; }
  virtual ~Mere() {}
};

class Fille : public Mere {
 public:
  Fille() { m(); }
  virtual void m() { cout << "mf" << endl; }
  virtual ~Fille() {}
};

int main(int, char**){
	
	Mere * o = new Fille;
	o->m();
	delete o;
	return 0;
}

*/



class Humain {
	string nom;
	int genre;
	int age;
	public:
		Humain(){}
		/*Humain(){
			nom = new char();
			prenom =new char();}
		~Humain(){
			delete nom;
			delete prenom;*/
		}
	    void Humain::setNom(string name) {
			strcpy(nom,name);
		}
		void Humain::setGenre(int gender){
			genre = gender
		}
		void Humain::setAge(int àge) {
			age = àge;
		}
		string Humain::getNom(){
			return nom;
		}
		int  Humain::getGenre(){
			return genre;
		}
		int Humain::getAge(){
			return age;
		}
		
		
		
};

class Machine { 
	string type;
	int autonomie;
	int ifixit;
	public:
		Machine(){}
		string Machine::getType(){
			return type;
		}
		int Machine::getAutonomie(){
			return autonomie;
		}
		int Machine::getIfixit(){
			return ifixit;
		}
};


class Humanoide : public Humain , public Machine{ 
	public:
		Humanoide(){}
}




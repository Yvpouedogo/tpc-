#include <iostream>
#include <string>
using namespace std;

class Mere{
	protected:
	    static int cpt //déclaration
	    
	public:
	   
	   Mere(){
		   cout <<"construction de mere"<<endl;
	   }
	   ~Mere(){
		   cout <<"destruction de mere"<<endl;
		}
	    static int getcpt();
	
};

class Fille : public Mere{
	public:
       Fille(){
		   cout<<"construction de fille"<<endl;
	   }
	   ~Fille(){
		   cout<<"destruction de fille"<<endl;
	    }
}

void Mere::Mere() {
	cout<<"construction de mere"<<endl;
}
void Fille::Fille() {
	cout<<"destruction de fille"<<endl;
}

int main(int , char..){
   c
}
	


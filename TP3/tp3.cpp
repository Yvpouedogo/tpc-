class Mere {
	
  // ...
  int x;
  
  public: 
	Mere(int nombre){
		x=nombre;
		cout <<"construction de"<< nombre <<endl;
    }
    Mere(){
		x=0;
		cout <<"deconstruction de"<< x <<endl;
	}
	int afficher();

}
class Fille:
	public Mere



#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
#include <stack>
#include <queue>
using namespace std;
class ZZ {
		string nom, prenom;
		double note;
		public:
			ZZ();
			ZZ( string pnom , string pprenom , double pnote) : nom(pnom) ,prenom(pprenom) ,note(pnote) {};
			bool operator < (const ZZ & other)const{
				return note < other.note;
			};
			friend ostream& operator << (ostream& , const ZZ&);
			friend class Comparenote;
			friend class Comparenom;
			friend class Compareprenom;
};
 

std::ostream& operator << ( std::ostream& os , const ZZ& zz) {
	return os << zz.nom << zz.prenom << zz.note << std::endl;
    }
class Comparenote {
	
	public:
	bool operator() (const ZZ &zz1 , const ZZ &zz2) const 
	{
		return (zz1.note < zz2.note);
	}
	
};
class Comparenom {
	
	public:
	bool operator() (const ZZ &zz1 , const ZZ &zz2) const 
	{
		return (zz1.nom < zz2.nom);
	}
};
 
class Compareprenom {
	
	public:
	bool operator() (const ZZ &zz1 , const ZZ &zz2) const 
	{
		return (zz1.prenom < zz2.prenom);
	}
}; 
 
 
 
 int main(int, char **){
  
	typedef std::vector<ZZ>  vzz;
	// OU en C++ 2011
	// using vzz = std::vector<ZZ> ;

	vzz zz;
	zz.push_back( ZZ("Rose" , "Astrid" ,18));
	zz.push_back( ZZ("Magalie" , "Fleur" ,17));

	// il faut mettre des elements
	// zz.push_back(ZZ(...));

	priority_queue<ZZ> tri;

	for(vzz::iterator it = zz.begin();
		it!=zz.end(); ++it)
	 tri.push(*it);

	while(!tri.empty()) {
	   cout << tri.top() << " ";
	   tri.pop();
	}
	return 0;
};


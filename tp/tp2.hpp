#include <iostream>
#include <string>

class Chaine
{
	public:
		Chaine();
		Chaine(int);
		Chaine(const char *);
		Chaine (const chaine *);
		~Chaine();
		Chaine * operateur=(const chaine *);
		void remplacer (const char *);
		const char *c-str() const ;
		char operateur[] (int) const;
 };
 
ostream & operateur<<(ostream & , const Chaine &);

 

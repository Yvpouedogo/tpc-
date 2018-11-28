
#ifndef Cercle_HPP
#define Cercle_HPP
#include <iostream>
#include <string>

using namespace std;

class Cercle
{
	int x;
	int y;
	int w;
	int h;
	
	public:
		Cercle(int x, int y, int w, int h);
		Cercle(int x, int y, int rayon);
		string toString();
}; 



#endif

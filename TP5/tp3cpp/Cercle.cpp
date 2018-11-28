#include "Cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h)
{
	x=x;
	y=y;
	w=w;
	h=h;
	
}
Cercle::Cercle(int x, int y, int rayon)
{
	x = x;
	y = y;
	w = 0;
	h = rayon;
}
string Cercle::toString()
{
	string chaine;
	chaine = "longueur : ..., largeur : ...";
	return chaine;
}

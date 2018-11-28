#include "Point.hpp"

/*int Point::getX() {
  return x;
}

void Point::setX(int new_x) {
	x = new_x;
}

int Point::getY() {
  return y;
}

void Point::setY(int new_y) {
	y = new_y;
}

void Point::DeplacerDe(int x, int y) {
	this->x += x;
	this->y += y;
}

void Point::DeplacerVers(int x, int y) {
	setX(x);
	setY(y);
}
*/

Point::Point(double u , double y )
{
	u=pu;
	y=py;
	++compteur;
}

int Point ::getcompteur()
{
	return compteur;
}
int Point::compteur =0;

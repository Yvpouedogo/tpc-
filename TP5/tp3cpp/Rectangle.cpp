#include "Rectangle.hpp"


Rectangle::Rectangle(int x, int y, int w, int h)
{
	x=x;
	y=y;
	w=w;
	h=h;
}

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
{
	x=x1;
	y=y1;
	w=x2;
	h=y2;
}

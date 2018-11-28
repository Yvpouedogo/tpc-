
#ifndef Rectangle_HPP
#define Rectangle_HPP
#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
	int x;
	int y;
	int w;
	int h;
	
	public:
		Rectangle(int x, int y, int w, int h);
		Rectangle(int x1, int y1, int x2, int y2);
		string toString();
}; 



#endif

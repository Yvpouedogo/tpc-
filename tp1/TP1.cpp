#include <iostream>
#include <string>
#include "Point.hpp"

using namespace std;

int main(int, char **)
{
   Point p1;
   
   
   /*p.setX(2);
   p.setY(3);
   cout << p.getX() << "," << p.getY() << std::endl;
   p.DeplacerDe(2,2);
   cout << p.getX() << "," << p.getY() << std::endl;
   p.DeplacerVers(6,8);
   cout << p.getX() << "," << p.getY() << std::endl;
   */
   Point p2(5., 5.);
   Point *pp = new Point(10. , 10.);
   cout <<pp->getX() <<endl;
   delete pp;
  return 0;
}

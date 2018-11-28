// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C
class Point {
   // par défaut, tout est privé dans une "class"

   double x;
   double y;
   static int compteur ;
   
 public:
	Point();
	Point(double , double);
	static double getcompteur();
  /*int getX();
  void setX(int);
  int getY();
  void setY(int);
  void DeplacerDe(int, int);
  void DeplacerVers(int, int);*/
  
};

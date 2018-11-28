#include "tp2.hpp"



int main(int, char **) {
   Chaine s1;
   Chaine s2(6);
   Chaine s3("essai");
   Chaine s4(s3);
   Chaine s5 = s3;

   s2 = s3;
   s3.remplacer("oups");
   s3.afficher();
   cout << s3.c_str();
   cout << s3[0];
   cout << s3;

   return 0;
}

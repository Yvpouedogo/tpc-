#include <iostream>

void swap (int *a, int *b) {
	int c;
	c = *a;
	*a  = *b;
	*b = c;
}

void swap2 (int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
}

void fonction1(int a)
{
  std::cout << &a << std::endl;
}

void fonction2(int& a)
{
  std::cout << &a << std::endl;
}

int main(int, char **)
{
  int a = 2, b = 3;
/*
  std::cout << &age << std::endl; // Affichage adresse de age
  fonction1(age); // Affichage adresse variable locale a fonction1
  fonction2(age); // Affichage adresse de age
*/

	swap2(a,b);
	std::cout << a << " " << b << std::endl;
  return 0;
}

#ifndef Fille_H
#define Fille_H

#include "Mere.hpp"
#include <iostream>


class Fille : public Mere
{
	public:
		Fille();
		~Fille();
		int getn(){return n;};
		void setn(int n2) { n = n2;};
};

#endif

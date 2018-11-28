#ifndef Mere_H
#define Mere_H

#include <string>
#include <iostream>

class Mere
{
	string chaine;
	protected:
	int n;
	public:
		Mere();
		Mere(string);
		~Mere();
		string getchaine(){return chaine;};
};

#endif

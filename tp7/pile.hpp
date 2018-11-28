#ifndef TP7_PILE_HPP
#define TP7_PILE_HPP
#include <iostream>
#include <fstream>
using std::string;

class Pile 
{
	int taille ;
	int top;
	int *tab;
	public:
		Pile(int = 256);
		int top_() const;
		bool empty() const;
		void pop();
		void push(const int&);
		~Pile();
		Pile & operator = (const Pile &);
		
};
#endif

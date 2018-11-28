#include "A.hpp"
#include "B.hpp"
A::A(int i):val(i){}

void A::send(B*pte){pte->exec(val);}
	
void A::exec(int i){val+ = i;}

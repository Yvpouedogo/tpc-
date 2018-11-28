#include "B.h"
#include "A.h"

B:B(int i):val(i){}

void B::send(A*pte){pte->exec(val);}
	
void B::exec(int i){val+ = i;}

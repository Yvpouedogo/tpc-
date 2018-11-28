#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
#include <stack>
#include <queue>

using namespace std;

class Fibo
{
	protected:
		int n1, n2;
	
	public:
		Fibo() : n1(0),n2(1) {};
		unsigned long operator() ()
		{
			unsigned long val=n1+n2;
			n1=n2;
			n2=val;
			return n1;
		}
		
};

int main(int, char **)
{
	Fibo F;
	vector<unsigned long> v(20) ;
	/*cout << F() << F() << F();*/
	generate(v.begin() , v.end(),F);
	copy(v.begin(),v.end(), ostream_iterator<unsigned long>(cout,"-"));
	return 0;
}

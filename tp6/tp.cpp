#include <iostream>

using namespace std;



class M {
 public:
  M() {
    std::cout << "M::M()" << std::endl;
  }
   ~M() {
    std::cout << "M::~M()" << std::endl;
  }
    M(const M&) {
    std::cout << "M::M(const M&)" << std::endl;
  }
   M &operator=(const M &)
  {
	  std::cout << "M::operator=(const M&)" << std::endl;
   }
   
};

/*class F : public M {
 public:
  F() {
    std::cout << "F::F()" << std::endl;
  }
~F() {
    std::cout << "F::~F()" << std::endl;
  }
  
  F(const F& f) {
    std::cout << "F::F(const F&)" << std::endl;
  }
  F &operator=(const F &)
  {
	  std::cout << "F::operator=(const F&)" << std::endl;
   }
  
};
*/

class A {
	
 M at;
 public:
  A() {
    std::cout << "A::A()" << std::endl;
  }
   ~A() {
    std::cout << "A::~A()" << std::endl;
  }
    A(const A& a) : at(a.at){
    std::cout << "A::A(const A&)" << std::endl;
  }
  A &operator=(const A &a) 
  {
	  at= a.at;
	  std::cout << "A::operator=(const A&)" << std::endl;
   }
 
};
int main(int, char**) {


  A a1;
  A a2;
  a2=a1;


  return 0;
}


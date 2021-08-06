#include <iostream> 
#include <string.h> 
using namespace std;


class A {
   protected:
	int x, y;
   public:
	void print ()
		{std::cout<<"From A"<<"\n";}
};

class B : public A {
   public: 
	void print ()
	    {std::cout<<"From B"<<"\n";}
};

int main()
{

A t1;
t1.print();

B t2;
t2.print();


return 0;
}

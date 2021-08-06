#include <iostream> 
#include <string.h> 
using namespace std;


class A {
   protected:
	int x, y;
   public:
   	int islemyap(int x,int y)
   		{ 
   			return x+y;
   		}
	   
		   
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
	int x,y,gecici;

A t1;
std::cout<<"x ve y ye deger ver.\n";
std::cin>>x>>y;
t1.print();
std::cout<<t1.islemyap(x,y)<<"\n";


B t2;
t2.print();


return 0;
}

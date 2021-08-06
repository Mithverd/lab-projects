#include <iostream> 
#include <string.h> 
using namespace std;

class Point{
	protected:
	   int x, y;
	public:
	   void set(int a, int b)
		{x=a; y=b;}
	   void foo ();
	   void print();
};


class Circle : public Point{
  private:  double r;
  public:
	void set (int a, int b, double c) {
		 Point :: set(a, b); //Çaðýracaðýn fonksiyonun ismini yaz
	     r = c;
	}
	void print();  
	};

	    

void Point :: print ( ){
std::cout<<"From Point "<<x<<"-"<<y<<"\n";
};

void Point :: foo ( ){
	std::cout<<"From Point-foo"<<"\n";
};

void Circle :: print ( ){
std::cout<<"From Circle "<<x<<"-"<<y<<"-"<<r<<"\n";
};


int main()
{
Point A;
A.set(30,50);  // Point Nnesnesinden
A.print(); // Point Neesnesinden
std::cout<<"\n\n";

Circle C;
C.set(10,12,125);   // Circle Nesnesinden
C.foo ();  // Point Nesnesinden
C.print(); // Circle Nesnesinden

return 0;
}

#include <iostream> 
#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class kahveler
{
	public:
		virtual int getmiktarı();
};
	
class Telvelikahveler :public kahveler
{
		
	public:
		virtual char getsertlik() = 0;
};

class Turkkahvesi :public Telvelikahveler
{
	public:
		char getsertlik()
		{
			return 'A';
		}
		int getKahve()
		{
			return 0;
		}
		
};

class Kafeinsizkahveler :public kahveler
{
	public:
		int getKahve()
		{
			return 0;
		}
};

class tozkahveler :public kahveler
{
	public:
		virtual int getsekermiktari()=0;
};
class filtrekahveler :tozkahveler
{
	public:
		int getsekermiktari()
		{
			return 0;
		}
		int getKahve()
		{
			return 0;
		}

};

int main()
{
	
}

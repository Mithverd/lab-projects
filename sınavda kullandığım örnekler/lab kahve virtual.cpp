#include <iostream>
class Kahveler    //Abstract 
{
public :  //
virtual int getMiktari() = 0;
};


class TelveliKahveler : public Kahveler {  //Abstract 
public : 
virtual char getSertik() = 0;
};


class TozKahveler : public Kahveler {  //Abstract 
public : 
virtual char getSekerMiktar() = 0;
};




class TurkKahvesi : public TelveliKahveler {
public : 
int getMiktari(){return 0;}
char getSertik(){return 'A';}
};




class FiltreKahveler : public TozKahveler {
public : 
char getSekerMiktar(){return 0;}
int getMiktari(){return 0;}
};


class KafeinsizKahveler : public Kahveler {
public : 
int getMiktari(){return 0;}
};



int main()
{
	FiltreKahveler fk;
	TurkKahvesi tk;
	KafeinsizKahveler kkk;
	//Kahveler k;
	//TelveliKahveler tk;
	//TozKahveler tkk;


return 0;
}

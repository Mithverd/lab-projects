#include <iostream>
#include "kareal.h"
#include "factorial.h"

using namespace std;


namespace Ostim
{

int birlesim(int sayigir)
{
cout<<"Birlesim 1- " << karealma(sayigir) <<endl;
cout<<"Birlesim 2- " << besebol(sayigir) <<endl;
return sayigir*2;
}


}


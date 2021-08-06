#include <iostream> 
#include <string.h> 
using namespace std;

class Kisi{
	private:
	   int para;
	   char isim[50];
	public:
	   void atamayap (char isim[], int para);
	   Kisi operator+(Kisi lertest); 
	   void yazdir ();
};



void Kisi::atamayap(char isim[], int para){
	strcpy(this->isim,isim);
	this->para=para;
	
}


Kisi Kisi::operator+(Kisi son){  
   Kisi k3;
   
   char isimbirlestirilmis [100];
   strcat(isimbirlestirilmis ,isim);
   strcat(isimbirlestirilmis ," ");
   strcat(isimbirlestirilmis ,son.isim);
   k3.atamayap(isimbirlestirilmis,(para+son.para));
      
   return(k3);
   }
   
   
void Kisi::yazdir()
{
std::cout<<isim<<"-"<<para<<"\n";
}
   
   
   
     int main(){
     Kisi a1;
     Kisi a2;
     a1.atamayap("Ahmet Mungen", 20);
     a1.yazdir();
     a2.atamayap("Aybuke Bozkurt",35);
        a2.yazdir();
        Kisi a3;
        a3 = a1 + a2;
        a3.yazdir();
     
	 
	 }

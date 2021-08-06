#include <iostream> 
#include <string.h> 

using namespace std;

class kisi
{
	private:
	   char kisiismi [20];
	   char telefon[20];
	public:
	   void atamayap(char kisiismiata[20],char telefonatat[20]);
	   void yazdir(void);
};
 
 
void kisi::yazdir(void)
{
    std::cout<<kisiismi<<"-"<<telefon<<"\n";
}


void kisi::atamayap(char kisiismiata[20],char telefonata[20])
{
     strcpy(telefon, telefonata);
     strcpy(kisiismi, kisiismiata);
}



class dersler
{
	private:
	   char dersismi [100];
	   int derskodu;
	   kisi dershocasi;
	public:
	   void derskoduata(int yeniderskodu);
	   void dersismisata(char yenidersismi[20]);
	   void dershocasiata(kisi dershocasiata);
	   void yazdir(void);
	   };


void dersler::derskoduata(int yeniderskodu)
{
    derskodu = yeniderskodu;
}

void dersler::dersismisata(char yenidersiismi[])
{
     strcpy(dersismi, yenidersiismi);
}

void dersler::dershocasiata(kisi dershocasiata)
{
	dershocasi = dershocasiata;
}

void dersler::yazdir(void)
{
std::cout<<"-"<<dersismi<<"-"<<derskodu<<"\n";
dershocasi.yazdir();
}



int main(){

kisi hoca;
hoca.atamayap("Ahmet Mungen","+90 538 XXYYZZ");
dersler dersim;
dersim.dershocasiata(hoca);
dersim.dersismisata("Algoritma ve Programlama 2");
dersim.derskoduata(123);

dersim.yazdir();

return 1;

}


#include <iostream>  
#include<conio.h>
#include<fstream>
#include <string.h>
class Ogrenci
{
	private:
	int ogrencinot;
	int ogrencino;
	public:
	void ogrencinoekle(int nogrencino);
	void notekle(int ogrencinot);
	void notyazdir(void);
};
void  Ogrenci::ogrencinoekle(int nogrencino)
{
	ogrencino=nogrencino;
}
void Ogrenci::notekle(int nogrencinot)
{
	ogrencinot=nogrencinot;
}
void  Ogrenci::notyazdir(void)
{
	std::cout<<"Ogrenci no: "<<ogrencino;
	std::cout<<"\nOgrenci notu: "<<ogrencinot;
}

int main()
{
	int nogrencino,nogrencinot;
	Ogrenci or1;
	
	std::cout<<"Ogrenci no giriniz:";
	std::cin>>nogrencino;
	
	std::cout<<"Ogrenci notunu giriniz:";
	std::cin>>nogrencinot;
	
	or1.ogrencinoekle(nogrencino);
	or1.notekle(nogrencinot);
	or1.notyazdir();
}

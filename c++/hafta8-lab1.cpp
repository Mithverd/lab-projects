#include<iostream>
#include<conio.h>

int main()
{
	int a,b;
	float carp;
	std::cout<<"a ve b icin deger giriniz:";
	std::cin>>a>>b;
	
	if(a<b)
	{
		a++;
		std::cout<<"\nyeni a degeri:"<<a;
	}
	if(a>b)
	{
		b++;
		std::cout<<"\nyeni b degeri:"<<b;
	}
	if(a==b)
	{
		carp = a*b;
		std::cout<<"\nelde edilen sonuc: "<<carp;
	}
	
}

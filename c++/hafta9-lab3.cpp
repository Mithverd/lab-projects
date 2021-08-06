#include <iostream>  
#include<conio.h>
#include<fstream>
#include <string.h>
int main()
{
	char tempvariable,fname[10];  
	std::cout<<"Enter file name:";  
	std::cin>>fname;

	std::ifstream dosyam(fname);
	if(!dosyam)
	{
		std::cout<<"Dosya bulunmmaktadir.";  
		return 0;
	}
	std::cout<<"-\n";  
	while(dosyam.eof()==0)
	{
		dosyam.get(tempvariable);
		std::cout<<tempvariable;
	}

	
}

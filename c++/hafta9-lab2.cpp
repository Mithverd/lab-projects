#include <iostream>  
#include<conio.h>
#include<fstream>
#include <string.h>
int main()
{
	char tempvariable,fname[10];  
	std::ofstream out;  
	std::cout<<"Dosya ismi Giriniz:";  
	std::cin>>fname;  
	if(strlen(fname)<3)
	{
		std::cout<<"isim hatali 3 karakterden kucuk olamaz.";
	}
	else
	{
		out.open(fname);
		std::cout<<"Dosyaya yazilacak veriyi giriniz (Bitirmek i�in # isareti giriniz):\n";  
		while((tempvariable=getchar())!='#')
		{	
			out<<tempvariable;
		}
		out.close();
	}
	
  
return 0;
}

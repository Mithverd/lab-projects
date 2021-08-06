#include <stdlib.h> 
#include <iostream>

int main(int argc, char *argv[]) { 
//Sirayla ogrneci ismi (tek kelime), vize notu ve final notu giriniz. 
char *isim = argv[1];
int vize = atoi(argv[2]);
std::cout<< "Vize:" << vize<<"\n";
int final = atoi(argv[3]);
std::cout<< "Final:" << final<<"\n";
double ortalama = (vize*40 + final*60)/100;

std::cout<< isim<< " isimli ogrencinin ortalama notu " << ortalama;
} 



//Bu program kolay çalýþtýrýlmasý için ornek90 ismi ile de kaydedilmiþtir.

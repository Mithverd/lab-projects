#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct{
	int ogrenciid,sinif, dogumtarih;
	float ortalama;
	char memleket[30];
}ogrenci;

ogrenci ogrencibilgi()
{
	ogrenci bilgi;
	printf("ogrenci id: ");
	scanf("%d",&bilgi.ogrenciid);
//---------------------------------------
	printf("sinif: ");
	scanf("%d",&bilgi.sinif);

	while(bilgi.sinif>=4||bilgi.sinif<=1)
	{
		printf("tekrardan sinif giriniz(1-4): ");
		scanf("%d",&bilgi.sinif);
	}
//---------------------------------------
	printf("dogum tarihi: ");
	scanf("%d",&bilgi.dogumtarih);
	while(bilgi.dogumtarih<1990||bilgi.dogumtarih>2010){
		printf("tekrardan dogumtarih giriniz(1990-2010): ");
		scanf("%d",&bilgi.dogumtarih);
	}
//---------------------------------------
	printf("ortalama: ");
	scanf("%f",&bilgi.ortalama);
	while(bilgi.ortalama>100||bilgi.ortalama<0)
	{
		printf("tekrardan ortalama giriniz(0-100): ");
		scanf("%d",&bilgi.ortalama);
	}
//---------------------------------------
	
	printf("memeleketi: ");
	scanf("%s",&bilgi.memleket);
//---------------------------------------
	return bilgi;
}	
void yazdir(ogrenci bilgi)
{
	printf(" %d\n",bilgi.ogrenciid);
	printf(" %d\n",bilgi.dogumtarih);
	printf(" %d\n",bilgi.sinif);
	printf(" %s\n",bilgi.memleket);
	printf(" %0.2f\n",bilgi.ortalama);
}
int main()
{
	ogrenci bilgi;
	
	
    bilgi = ogrencibilgi();
	yazdir(bilgi);
	

}

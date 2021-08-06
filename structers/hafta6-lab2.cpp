#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char testsonuc[30];
	
	int kontrol=0;
	typedef struct {
	int ogrencino;
	char sinif;
	char isim[];
	int notlar[4];
	} ogrenci;

	int i;
	
	ogrenci ogr;
	printf("ogrencino girin: ");
	scanf("%d",&ogr.ogrencino);
	printf("sinif girin: ");
	scanf(" %c",&ogr.sinif);
	printf("isim girin: ");
	scanf("%s",&ogr.isim);
	
	
	for(i=0;i<4;i++)
	{
		printf("%d notu girin:\n",i);
		scanf("%d",&ogr.notlar[i]);
		
	}
	
	printf("%d ogrencino\n",ogr.ogrencino);
	printf("%c sinif\n",ogr.sinif);
	printf("%s isim\n",ogr.isim);
	
	for(int i=0; i<4; i++){
  		printf("Ders icin Notu: %d \n", ogr.notlar[i]);
	}
	
	
}

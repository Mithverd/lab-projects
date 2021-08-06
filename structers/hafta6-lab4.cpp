#include <stdio.h>
#include <String.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 
#include <stdio.h>

typedef struct {
	int gun;
	int ay,yil;
} tarih;

enum medenidurum{
	evli,bekar
};

typedef struct {
	char kisiismi[];
	tarih dogumtarihi;
	tarih evlenmetarihi;
	medenidurum durum;
} insan;



int main() {
	int n;
	char medenidurum;
	printf("kac kisi: ");
	scanf("%d",&n);
	
	insan insanlar[n];
	for(int j=0; j<n; j++)
	{
		printf("kisinin ismi: ");
		scanf("%s",&insanlar[j].kisiismi);
		char medenidurum[30];
		printf("medeni durumunuz: ");
		scanf("%s",&medenidurum);
		if(strcpy(medenidurum,"evli")==0)
		{
			insanlar[j].durum = evli;
			printf("evlenme tarihinizi giriniz: ");
			scanf("%d %d %d",&insanlar[j].evlenmetarihi.gun,&insanlar[j].evlenmetarihi.ay,&insanlar[j].evlenmetarihi.yil);
		}
		else
		{
			insanlar[j].durum = bekar;
		}
		printf("dogum tarihi(bosluklu yazin ornek 10 10 2020): ");
		scanf("%d %d %d",&insanlar[j].dogumtarihi.gun,&insanlar[j].dogumtarihi.ay,&insanlar[j].dogumtarihi.yil);
	}
	
	for(int j=0; j<n; j++)
	{
		printf("Isim: %s \n",insanlar[j].kisiismi);
 		printf("Dogum: %d %d %d \n",insanlar[j].dogumtarihi.gun, insanlar[j].dogumtarihi.ay, insanlar[j].dogumtarihi.yil );
		printf("Medeni Durum: %d \n",insanlar[j].durum);
 		if(insanlar[j].durum==1){
 		printf("Evlilik: %d %d %d \n",insanlar[j].evlenmetarihi.gun, insanlar[j].evlenmetarihi.ay, insanlar[j].evlenmetarihi.yil );
 		}

	}
}

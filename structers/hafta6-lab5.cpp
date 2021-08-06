#include <stdio.h>
#include <String.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 
#include <stdio.h>
enum medenidurum {Bekar, Evli};
                    
typedef struct {
int gun;
int ay;
int yil;
} tarih;

typedef struct {
char kisiismi [50];
tarih dogumtarihi;
tarih evlenmetarihi;
medenidurum durum;
} insan;

insan bilgidondur(insan a1)
{
  	printf("Kisi Ysmi Giriniz: \n");
  	scanf("%s",&a1.kisiismi);
  	char medenidurum [30];
  	printf("Medeni Durum Giriniz: \n");
 	 scanf("%s",&medenidurum);
	if(strcmp(medenidurum,"Bekar")==0){
	a1.durum = Bekar;
	}else if(strcmp(medenidurum,"Evli")==0){
	a1.durum = Evli;
	}else{
	printf("HATALI DEGER");
	}
	printf("Dogum Tarihini Gun Ay Yil Olarak birer Bosluk Birakarak Giriniz Ornek: 10 02 2020: \n");
	scanf("%d %d %d",&a1.dogumtarihi.gun,&a1.dogumtarihi.ay,&a1.dogumtarihi.yil);
	if(a1.durum==1){
 		 printf("Evlilik Tarihini Gun Ay Yil Olarak birer Bosluk Birakarak Giriniz Ornek: 10 02 2020: \n");
 		 scanf("%d %d %d",&a1.evlenmetarihi.gun,&a1.evlenmetarihi.ay,&a1.evlenmetarihi.yil);
	}
	return a1;
}

int main() {

int insansayisi = 0,bilgi;
printf("Kac Insan Kayit Edilecek? \n");
scanf("%d",&insansayisi);
insan insanlar[insansayisi];

for(int i=0; i<insansayisi; i++){
	insanlar[i] = bilgidondur(insanlar[i]);
}
//printf("Kaydedilen Indis %d \n",i);
printf("Toplam Insan Sayisi: %d \n",insansayisi);
  
for(int i=0; i<insansayisi; i++){
 printf("Isim: %s \n",insanlar[i].kisiismi);
 printf("Dogum: %d %d %d \n",insanlar[i].dogumtarihi.gun, insanlar[i].dogumtarihi.ay, insanlar[i].dogumtarihi.yil );
 printf("Medeni Durum: %d \n",insanlar[i].durum);
 if(insanlar[i].durum==1){
 printf("Evlilik: %d %d %d \n",insanlar[i].evlenmetarihi.gun, insanlar[i].evlenmetarihi.ay, insanlar[i].evlenmetarihi.yil );
 }
	
}	


}

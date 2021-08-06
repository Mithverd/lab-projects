#include <stdio.h>
#include <String.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 
#include <stdio.h>

typedef struct {
	char isim [];
	char sinif;
	int ogrencino;
	int notlar [4];
} Ogrenci;

int main() {
 	Ogrenci o1;
	Ogrenci ogrenciler[3];
 	
 	for(int j=0; j<3; j++)
 	{
	
		printf("ID#: \n");
		scanf("%d",&o1.ogrencino);
 		printf("Sinifi: \n");
 		scanf(" %c",&o1.sinif);
  		printf("Ismi: \n");
  		scanf("%s",&o1.isim);

		for(int i=0; i<4; i++){
 			printf("%d. Ders icin Not Giriniz: \n", i);
			scanf("%d",&o1.notlar[i]);
		}
	
		ogrenciler[j] = o1;
	}
	
	
	for(int j=0; j<3; j++)
 	{
 		o1 = ogrenciler[j];
	 	printf("\n\n");
 		printf("Isim: %s \n", o1.isim);
		printf("Sinif: %c \n", o1.sinif);
 		printf("Ogrenci No: %d \n", o1.ogrencino);

		for(int i=0; i<4; i++){
  			printf("Ders icin Notu: %d \n", o1.notlar[i]);
		}
	}
}


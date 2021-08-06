#include <stdio.h>
#include <stdlib.h>

int main()
{
	int adet,*sayilar,toplam=0,i;
	printf("adedi giriniz: ");
	scanf("%d",&adet);
	
	sayilar = (int *) calloc(adet, sizeof(int));
	
	for(i=0;i<adet;i++)
	{
		printf("%d. eleman icin sayiyi giriniz: ",i+1);
		scanf("%d",&(sayilar[i]));
	}
	
	for(i=0;i<adet;i++)
	{
		printf("%d. eleman %d\n ",i+1,sayilar[i]);
		toplam = toplam + sayilar[i];
	}
	printf("aratoplam = %d\n",toplam);
	
	int ekadet = 0;
	printf("boyut giriniz: ");
	scanf("%d",&ekadet);
	
	realloc(sayilar,(adet+ekadet) * sizeof(int));
	
	for(i= adet; i<adet+ekadet; i++)
	{
		printf("%d. eleman icin sayiyi girin: ",i);
		scanf("%d",&sayilar[i]);
	}
	
	int toplam2=0;
	
	for(i=adet;i<adet+ekadet;i++)
	{
		printf("%d. eleman %d\n ",i+1,sayilar[i]);
		toplam2 = toplam2 + sayilar[i];
	}
	
	printf("toplam = %d",toplam2);
	 
}

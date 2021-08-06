#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Ankara, Adana, Antalya,sayi1,sayi2,sayi3;
	int *Bursa, *Bolu, *Burdur,*Bilecik,*Bodrum;
	
	Bursa=&Ankara;
	Bolu=&Ankara;
	Burdur=&Ankara;
	
	Bilecik =&Adana;
	Bodrum=&Adana;
	
	printf("deger ata: ");
	scanf("%d",Bursa);
	
	printf("Ankara= %d\n",Ankara);
	printf("Bursa= %d\n",Bursa);
	printf("Bursa= %x\n",Bursa);
	//-------------------------
	printf("\ndeger ata: ");
	scanf("%d",Bolu);
	
	printf("Ankara= %d\n",Ankara);
	printf("Bolu= %d\n",Bolu);
	printf("Bolu= %x\n",Bolu);

	//---------------------------
	printf("\ndeger ata: ");
	scanf("%d",Burdur);
	
	printf("Ankara= %d\n",Ankara);
	printf("Burdur= %d\n",Burdur);
	printf("Burdur= %x\n",Burdur);

	//----------------------------
	printf("\ndeger ata: ");
	scanf("%d",Bilecik);
	
	printf("Adana= %d\n",Adana);
	printf("Bilecik= %d\n",Bilecik);
	printf("Bilecik= %x\n",Bilecik);

	//----------------------------
	printf("\ndeger ata: ");
	scanf("%d",Bodrum);
	
	printf("Adana= %d\n",Adana);
	printf("Bodrum= %d\n",Bodrum);
	printf("Bodrum= %x\n",Bodrum);
	
	puts(" \n");
	Bilecik=Bolu;
	
	printf("Ankara= %d\n",Ankara);
	printf("Bolu= %d\n",Bolu);
	printf("Bolu= %x\n",Bolu);
	
	printf("Adana= %d\n",Adana);
	printf("Bilecik= %d\n",Bilecik);
	printf("Bilecik= %x\n",Bilecik);


}

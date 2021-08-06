#include <stdio.h>
#include <stdlib.h>

/*void katinial(int *pointer)
{
	int adet,i, yedek= *pointer;
	
}*/

int main()
{
	int sayi,*isaretci1,**isaretci2;
	isaretci1 = &sayi;
	isaretci2 = &isaretci1;
	
	printf("sayiyi giriniz: ");
	scanf("%d",isaretci1);
	
	printf("sayi: %d\n",sayi);
//--------------------------------------
	printf("yeni sayiyi giriniz: ");
	scanf("%d",isaretci1);
	
	printf("yeni sayi: %d\n",sayi);
//--------------------------------------
	printf("yeni sayiyi giriniz: ");
	scanf("%d",*isaretci2);
	
//--------------------------------------
	printf("yeni sayi: %d\n",sayi);
	printf("isaretci1 degeri: %d\n",*isaretci1);
	printf("isaretci2 degeri: %d\n",**isaretci2);
	printf("%x\n",isaretci1);
	printf("%x\n",isaretci2);
	
}

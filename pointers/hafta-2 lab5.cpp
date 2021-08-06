#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sayi,*isaretci1,**isaretci2;
	isaretci1 = &sayi;
	isaretci2 = &isaretci1;
	
	printf("sayiyi giriniz: ");
	scanf("%d",isaretci1);
	
	printf("isaretci1= %d",*isaretci1);
	
	printf("sayiyi giriniz: ");
	scanf("%d",*isaretci2);
	
//--------------------------------------
	*isaretci1 = *isaretci1 + 2;
	printf("sayi degeri: %d\n",sayi);

	**isaretci2 = **isaretci2 + 3;
	
	printf("sayi degeri: %d\n",sayi);
	printf("isaretci1 degeri: %d\n",isaretci1);
	printf("isaretci2 degeri: %d\n",*isaretci2);

}

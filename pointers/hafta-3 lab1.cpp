#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sayilar[5] = {2,3,20,6,0};
	int *pointer[5];
	int *pointerno[5];
	
	pointer[0] = &sayilar[0];
	pointer[1] = &sayilar[1];
	pointer[2] = &sayilar[2];
	pointer[3] = &sayilar[3];
	pointer[4] = &sayilar[4];
	
	sayilar[0] = *pointerno[0];
	
	printf("%x\n",&pointer[0]);
	printf("%d\n",*pointer[0]);	
	printf("%x\n",pointer[1]);
	printf("%d\n",*pointer[1]);
	printf("%x\n",pointer[2]);	
	printf("%d\n",*pointer[2]);
	
	printf("%d  %x\n",(*pointerno[0]+1),pointerno[0]+1);	
	 
}

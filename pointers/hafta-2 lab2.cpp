#include <stdio.h>
#include <stdlib.h>

void katinial(int *pointer, int carpim)
{
	*pointer = *pointer *carpim;
}

int main()
{
	int sayi,carpim,*pointer;
	
	pointer = &sayi;
	
	printf("sayiyi giriniz: ");
	scanf("%d",pointer);
	
	printf("carpimi giriniz: ");
	scanf("%d",&carpim);
	
	katinial(&sayi,carpim);
	
	if(carpim>10 || carpim<0)
	{
		carpim = 0;
	}
	
	printf("yeni say: %d\n",sayi);
	printf("yeni carpim: %d",carpim);
}

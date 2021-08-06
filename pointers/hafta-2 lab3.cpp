#include <stdio.h>
#include <stdlib.h>

void katinial(int *pointer, int *carpimpointer)
{
	int adet,i, yedek= *pointer;
	//printf("carpim adedini giriniz: ");
	//scanf("%d",&adet);
	
	for(i=1; i<*carpimpointer; i++)
	{
		*pointer=*pointer * yedek;
	}
}

int main()
{
	int sayi,carpim,*pointer,*carpimpointer;
	carpimpointer= &carpim;
	pointer = &sayi;
	
	printf("sayiyi giriniz: ");
	scanf("%d",pointer);
	
	printf("carpimi giriniz: ");
	scanf("%d",&carpim);
	
	katinial(&sayi,&carpim);
	
	printf("yeni say: %d\n",sayi);
	printf("yeni carpim: %d",carpim);
}

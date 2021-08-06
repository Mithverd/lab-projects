#include <stdio.h>
#include <stdlib.h>

void katinial(int *pointer)
{
	*pointer = *pointer *2;
}

int main()
{
	int sayi;
	
	printf("sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	katinial(&sayi);
	
	printf("yeni say: %d",sayi);
}

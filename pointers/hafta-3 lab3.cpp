#include <stdio.h>
#include <stdlib.h>

int dizial(int *A)
{
	int i,toplam=0;
	int size = sizeof(A);
	
	for(i=0; i<size;i++)
	{
		toplam = toplam + A[i];
	}
	printf("%d",toplam);
	return toplam;
}

int main()
{
	int sayilar[6] = {1,3,5,9,11,34};
	int *A,sonuc;
	
	sonuc = dizial(sayilar);
	printf("%d",sonuc);

	

	


	 
}

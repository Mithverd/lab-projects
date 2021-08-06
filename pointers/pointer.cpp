#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A=3;
	int *P;
	P=&A;
	
	printf("A= %d\n",A);
	printf("adrs= %x\n",P);
	printf("dgr= %d\n",P);
	
	printf("pointer degeri gir:");
	scanf("%d",P);
	
	printf("A= %d\n",A);
	printf("adrs= %x\n",P);
	printf("dgr= %d\n",P);

	



	
	

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A=3;
	int *P,*G;
	
	
	P=&A;
	G=&A;
	
	printf("%d\n",A);
	printf("P_adrs= %x\n",P);
	
	printf("\ndeger atayin: ");
	scanf("%d",&A);
	
	printf("%d",A);
	printf("\nG_adrs= %x",G);

}

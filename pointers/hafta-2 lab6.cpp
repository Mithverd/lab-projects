#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A=3,*B;
	
	
	printf("%d\n",A);
	printf("%x\n",&A);
	
	B=&A;
	
	printf("%d\n",*B);
	printf("%x\n",B);
	
	printf("deger gir: ");
	scanf("%d",&A);
	
	printf("%d\n",*B);
	printf("%x\n",B);
	
	printf("deger gir: ");
	scanf("%d",B);
	
	printf("%d\n",A);
	printf("%x\n",B);

}

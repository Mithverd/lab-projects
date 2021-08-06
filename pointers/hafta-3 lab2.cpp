#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sayilar[5] = {1,3,5,9,11};
	int *pointer;
	
	pointer = &sayilar[0];
	
	printf("%x  %d\n",&pointer,(pointer));
	printf("%x  %d\n",&pointer+1,(pointer+1));
	printf("%x  %d\n",&pointer+2,(pointer+2));

	 
}

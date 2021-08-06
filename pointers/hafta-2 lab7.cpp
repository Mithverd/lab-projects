#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *isaretci1;
	float fsayi = 5.2;
	isaretci1 = &fsayi;
	
//-------------------------------------
	
	printf("adresi: %x\n",isaretci1);
	printf("isaretci1 degeri: %.2f\n",*isaretci1);
	
	*isaretci1 = *isaretci1 + 4.5;
	
	printf("adresi: %x\n",isaretci1);
	printf("isaretci1 degeri: %.2f\n",*isaretci1);

	
}

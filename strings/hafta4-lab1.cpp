#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i,digit,alpha,arasonuc=0;
	char str1[100];
	
	printf("lutfen bosluksuz bir string giriniz: ");
	scanf("%s", str1);
	
	printf("deneme : %s \n",str1);
	
	
	for(i=0; str1[i] != '\0';i++)
	{
		if(isdigit(str1[i]) != 0)
		{
			digit++;
		}
	
		else if(isalpha(str1[i]) != 0)
		{
			alpha++;
		}	
	}
	
	printf("girdiginiz stringde: \n %d adet rakam\n %d adet harf bulunmakta.",digit-1,alpha);
}

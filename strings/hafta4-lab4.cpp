#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int i,n,kontrol=0,uzunluk=0;
	char str1[100];

	printf("lutfen bosluksuz bir string giriniz: ");
	scanf("%s", str1);
	
	printf("deneme : %s \n",str1);
	
	uzunluk = strlen(str1);
	
	
	for(i=0; i<=uzunluk/2; i++)
	{
		if(str1[i]!=str1[uzunluk-i-1])
		{
			kontrol = 1;
		}
	}
	printf("kontrol %d ",kontrol);
	
		
}

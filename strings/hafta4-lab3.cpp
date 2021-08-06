#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int i,digit,alpha,uzunluk=0,n;
	char str1[100];

	printf("lutfen bosluksuz bir string giriniz: ");
	scanf("%s", str1);
	
	printf("deneme : %s \n",str1);
	
	uzunluk = strlen(str1);
	
	for(i=uzunluk-1; i>=0; i--)
	{
		printf("%c",str1[i]);
	}

		
}









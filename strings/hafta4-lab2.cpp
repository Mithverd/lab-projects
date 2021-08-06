#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int i,digit,alpha,arasonuc=0;
	char str1[100];
	
	printf("lutfen bosluksuz bir string giriniz: ");
	scanf("%s", str1);
	
	printf("deneme : %s \n",str1);
	
	printf("kucuk hali:");
	for(i=0; str1[i] != '\0';i++)
	{
		printf("%c",tolower(str1[i]));
	}

	printf(" \nbuyuk hali:");
	
	for(i=0; str1[i] != '\0';i++)
	{
		printf("%c",toupper(str1[i]));
	}	
}

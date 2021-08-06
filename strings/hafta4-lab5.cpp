#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int i,boslukuzunluk=0,gecici;
	char str1[100];
	
	printf("lutfen bir string giriniz: ");
	gets(str1);
	
	printf("girdiginiz : %s \n",str1);
	
	gecici = strlen(str1);
	
	for(i=0; i<=gecici;i++)
	{
		if(str1[i]== ' ')
		{
			boslukuzunluk = i-1;
			for(i=0; i<=boslukuzunluk; i++)
			{
				printf("%c",str1[i]);
			}
		}
		
		
	}	
}

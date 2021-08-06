#include <stdio.h> 
#include <stdlib.h>

int main (int argc, char *argv[]) { 
	int count,toplam=0; 
	
	printf ("Bu Program Calistirildi \"%s\".\n",argv[0]); 
	if (argc > 3) { 
		for (count = 1; count < argc; count++) 
		{ 
		 	int sayi = atoi(argv[count]);
		 	toplam = toplam+sayi;
		}
	} 
	else {
		printf("3den az parametre giremezsiniz.\n"); 
	} 
	printf("Toplam sayi= %d",toplam);
return 0; 
} 

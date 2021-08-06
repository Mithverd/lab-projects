#include <stdio.h>
#include <string.h>

typedef struct{
		int gun,ay,yil;
		char olay[100];
	}tarih;
	
Listesirala (tarih olaylar [], int uzunluk){
  
  for(int i=0; i< uzunluk; i++){
  	for(int j=0; j< uzunluk; j++){
  	int tar1 = olaylar[i].yil * 1000 + olaylar[i].ay * 10 + olaylar[i].gun;
  	int tar2 = olaylar[j].yil * 1000 + olaylar[j].ay * 10 + olaylar[j].gun;
  		if(tar1>tar2){
  			tarih temp = olaylar[i];
  			olaylar[i] = olaylar[j];
  			olaylar[j] = temp;
		  }
	  }
  }
}	
int main() {
	
	tarih a1[1000];
	
	int i=0;
	
	FILE *cfPtr;
	cfPtr = fopen ("tariholay.txt","r");
	
	if (cfPtr == NULL)
	{
		puts("Dosya acilamadi");
	}
	else
	{	
		while (!feof(cfPtr))
		{
			fscanf(cfPtr,"%d %d %d %s", &a1[i].gun, &a1[i].ay, &a1[i].yil, a1[i].olay);
			i++;
		}
		i=i-1;
		
		fclose(cfPtr);
		tarih a2[i];
		for(int j=0; j<i; j++)
		{
			a2[j] = a1[j];
		}
		Listesirala(a2,i);
		
		for(int j=0;j<i;j++)
		{
			printf("%d %d %d %s\n",a2[j].gun,a2[j].ay,a2[j].yil,a2[j].olay);
		}
		
	}
	return 0;
}

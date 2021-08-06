#include <stdio.h>

typedef struct{
		int gun,ay,yil;
		char olay[100];
	}tarih;
	
int main() {
	tarih tarihler[3];
	int i;
	for(i=0; i<3;i++)
	{
		printf("Yasanan olayi yazin:");
		scanf("%s",&tarihler[i].olay);
		printf("gun ay yil giriniz: ");
		scanf("%d%d%d",&tarihler[i].gun,&tarihler[i].ay,&tarihler[i].yil);
	}
	FILE *cfPtr;
	cfPtr = fopen ("tariholay.txt","w");
	
	if (cfPtr == NULL)
	{
		puts("Dosya acilamadi");
	}
	else
	{	
		for(i=0; i<3;i++)
		{
		fprintf(cfPtr,"%d %d %d (%s)\n",tarihler[i].gun,tarihler[i].ay,tarihler[i].yil,tarihler[i].olay);
		}
	}
	return 0;
}

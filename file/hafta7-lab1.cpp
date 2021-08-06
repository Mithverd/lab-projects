#include <stdio.h>

int main() {
	FILE *cfPtr;
	int gun,ay,yil;
	cfPtr = fopen ("tarih.txt","w");
	
	if (cfPtr == NULL)
	{
		puts("Dosya acilamadi");
	}
	else
	{
		printf("gun ay yil giriniz: ");
		puts("Programi sonlandirmak icin EOF(ctrl+Z) giriniz.");
		scanf("%d%d%d",&gun,&ay,&yil);
		while (!feof(stdin))
		{
			fprintf(cfPtr,"%d %d %d\n",gun,ay,yil);
			printf("? ");
			scanf("%d%d%d",&gun,&ay,&yil);
		}
		fclose(cfPtr);
	}
	return 0;
}

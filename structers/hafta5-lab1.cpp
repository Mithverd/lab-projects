#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct dersim{
		int derskodu;
		char dersismi[30];
		int dersinsinifi;
		int dersinmevcudu;
	}ders1,ders2;
	

int main()
{
	printf("derskodunuzu girin: ");
	scanf("%d",&ders1.derskodu);
	printf("dersismi: ");
	scanf("%s",&ders1.dersismi);
	printf("dersinsinifi: ");
	scanf("%d",&ders1.dersinsinifi);
	printf("dersinmevcudu: ");
	scanf("%d",&ders1.dersinmevcudu);
	
	printf("derskodunuz %d\n",ders1.derskodu);
	printf("dersismi: %s\n",ders1.dersismi);
	printf("dersinsinifi %d\n",ders1.dersinsinifi);
	printf("dersinmevcudu %d\n",ders1.dersinmevcudu);
	
	
	ders2.derskodu = ders1.derskodu *2;
	ders2.dersinsinifi = ders1.dersinsinifi *2;
	ders2.dersinmevcudu = ders1.dersinmevcudu *2;
	strcpy(ders2.dersismi,ders1.dersismi);
	
	printf("derskodunuz %d\n",ders2.derskodu);
	printf("dersismi: %s\n",ders2.dersismi);
	printf("dersinsinifi %d\n",ders2.dersinsinifi);
	printf("dersinmevcudu %d\n",ders2.dersinmevcudu);
}

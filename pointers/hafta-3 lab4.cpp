#include <stdio.h>
#include <stdlib.h>

int islemyap(int *a1,int *a2,int *b1,int *b2,int *b3,int *b4)
{

	
	*b1 = *a1 + *a2;
	*b2 = *a1 * *a2;
	*b3 = *a1 - *a2;
	if(*a2 != 0)
	{
		*b4 = *a1 / *a2;
		return 1;
	}
	return 0;
}

int main()
{
	int a1=15,a2=5,toplam=0,cikarma=0,bolme=0,carpma=0;
	int *p0 = &a1, *p1= &a2;
	int sonuc;
	
sonuc=islemyap(p0,p1,&toplam,&carpma,&cikarma,&bolme);
	printf("top= %d\n",toplam);
	printf("carp= %d\n",carpma);
	printf("cik= %d\n",cikarma);
	printf("bol= %d\n",bolme);
}

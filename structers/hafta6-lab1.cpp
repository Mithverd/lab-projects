#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char testsonuc[30];
	
	int kontrol=0;
	enum {
		noinfo=-1,negative=0,positive=1
	}corona;
	printf("corona testi sonucu: ");
	scanf("%s",testsonuc);
	
	if(strcmp(testsonuc,"positive")==0)
	{
		corona == positive;
	}
	if(strcmp(testsonuc,"negative")==0)
	{
		corona == negative;
	}
	if(strcmp(testsonuc,"noinfo")==0)
	{
		corona == noinfo;
	}
	
	printf("%d",corona);
}

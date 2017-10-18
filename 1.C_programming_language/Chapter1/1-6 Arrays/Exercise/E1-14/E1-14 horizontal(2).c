#include<stdio.h>
#define M 26
int main()
{
	int nc[M],c,i,unc[M],nblank,nothers;
	for(i=0;i<M;i++)
	{
		nc[i]=0;
		unc[i]=0;
	}
	nblank=0;
	nothers=0;

	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t'||c=='\n')
			nblank++;
		else if(c>='a'&&c<='z')
			nc[c-'a']++;
		else if(c>='A'&&c<='Z')
			unc[c-'A']++;
		else nothers++;
	}

	for(i=0;i<M;i++)
	{
		
		printf("%c:",'a'+i);
		while(nc[i]--)
			printf("*");
		printf("\n");
		
	}
	for(i=0;i<M;i++)
	{
		printf("%c:",'A'+i);
		while(unc[i]--)
			printf("*");
		printf("\n");
	}

	printf("blank:");
	while(nblank--)
	{
		printf("*");	
	}
	printf("\n");
	printf("others:");
	while(nothers--)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}




#include<stdio.h>
#define M 26
#define N 10
int main()
{
	int c,i,j,nc[M],nblank,nothers;
	nblank=nothers=0;
	for(i=0;i<M;i++)nc[i]=0;


	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t'||c=='\n')
			nblank++;
		else if(c>='a'&&c<='z')
			nc[c-'a']++;
		else
			nothers++;
	}

	for(i=0;i<M;i++)
{
	printf("%c\t",'a'+i);
}
	printf("blank\t");
	printf("others\n");

	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(nc[j])
			{
				printf("*");
				nc[j]--;
			}
			else 
			printf(" ");
			printf("\t");
		}
		if(nblank)
		{
			printf("*");
			nblank--;
		}
		else printf(" ");
		printf("\t");
		if(nothers)
		{
			printf("*");
			nothers--;
		}
		else printf(" ");
		printf("\n");
	}


	return 0;
}


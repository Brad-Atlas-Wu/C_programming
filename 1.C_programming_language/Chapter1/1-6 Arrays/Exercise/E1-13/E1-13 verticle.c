#include<stdio.h>
#define IN 1
#define OUT 0
#define M 10

main()
{
	int c,nc[M],i,state;
	int l,r;
	for(i=0;i<M;i++) nc[i]=0;
	state=OUT;
	i=0;
	while((c=getchar())!='\n')
	{
		if(c==' '||c=='\n'||c=='\t')		// use i to count how many words, use nc[i] to count how many words in each words
		{
			if(state==IN)				
			{
				state=OUT;
				printf("\t");

			}
		}
		else if(state==OUT)
		{
			state=IN;
			i++;
		}


		if(state==IN)
		{
			++nc[i-1];
			printf("%c",c);
		}
	}
		printf("\n");



	for(l=0;l<8;l++)				//draw the histogram
		{
			for(r=0;r<i;r++)
			{
				if(nc[r]!=0)
				{
					printf("%c\t",'*');
					--nc[r];
				}
				else printf("%c\t",' ');
			}
			printf("\n");
		}
	return 0;

}

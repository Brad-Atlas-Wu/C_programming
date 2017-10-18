/* Quetion: print a histogram of the lengths of words

  Methods: 1)text words
		   2)count characters in a word,use arrays to store
		   3)use arrays to draw histogram

*/



#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
	int c,i,state,nc[10];
	state=0;
	for(i=0;i<10;i++)
	{
		nc[i]=0;
	}
	

	i=-1;
	while((c=getchar())!=EOF)				// text words      and nc count the number of characters in each word
	{	
		if(c==' '||c=='\n'||c=='\t')
			{
				if(state==IN)
				{
					state=OUT;
					printf(":");
					
					while(nc[i]!=0)			// draw the histogram
					{
						printf("*");
						--nc[i];
					}
					printf("\n");
				
					
				
				}
			}
		else if(state==OUT)
		{
			state=IN;
			++i;
		}


		if(state==IN)
		{	
			++nc[i];
			printf("%c",c);
		}
	}


		




	
	
}
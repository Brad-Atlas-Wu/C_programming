#include<stdio.h>
#define IN 1
#define OUT 0

main()
{	int c,nw,nl,nc;
	int condition=OUT;
	nc=nl=nw=0;
	while((c=getchar())!=EOF)
	{
		++nc;
		if(c=='\t'||c==' '||c=='\n')
		{	
			if(condition==IN)
			{
				condition=OUT;
				++nw;
			}
			
		}
		if(c=='\n')nl++;
		else condition=IN;
	}
printf("there are %d words,%d lines and %d characters\n",nw,nl,nc);


														// Both for loop and while loop can work in this question
}



/*main()
{
	int c,nw,nl,nc;
	int condition;
	nc=nl=nw=0;
	for(condition=OUT;(c=getchar())!=EOF;)
	{	
		++nc;
		if(c=='\t'||c==' '||c=='\n')
		{	
			if(condition==IN)
			{
				condition=OUT;
				++nw;
			}
			
		}
		if(c=='\n')nl++;
		else condition=IN;
	}
printf("there are %d words,%d lines and %d characters\n",nw,nl,nc);





}*/
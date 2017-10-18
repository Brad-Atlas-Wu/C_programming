#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
	int nc, i, c,status;
	status = OUT;
	nc = 0;
	while((c=getchar())!= EOF)
	{
		if(c==' '||c=='\n'||c=='\t')
		{
			status = OUT;
			if(nc!=0)
			{	
				printf(":");
				for(i=0;i<nc;i++)
					printf("*");
				printf("\n");
				nc=0;
			}
		}
		else if(status == OUT)
		{
			status = IN;
			
		}
		if(status == IN)
		{
			putchar(c);
			nc++;
		}

	}
	return 0;
}
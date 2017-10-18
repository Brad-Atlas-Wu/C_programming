#include<stdio.h>

main()
{	
	int nb,nt,nl,c;
	nb=nt=nl=0;
	while((c=getchar())!=EOF)
	{
		if(c==' ')++nb;
		else if(c=='\t')++nt;
		else if(c=='\n')++nl;

	}

	printf("there are %d blank,%d Tab and %d newline\n",nb,nt,nl);
}
#include<stdio.h>
#define IN 1
#define OUT 0
main()
{	
	int c;
	int condition=OUT;
	while((c=getchar())!= EOF)
	{
		if(c==' '||c=='\t')		// it cannot be "c==' '||'\t' " here, because "||" has as higher precedence than "=="
		{
			if(condition==IN)
			{
				printf(" ");       // Although there is only one character inside. it must be double quotes, or compiler will produce an error
				condition=OUT;
			}
		
		}
		else {condition=IN; printf("%c",c);}
	}
}
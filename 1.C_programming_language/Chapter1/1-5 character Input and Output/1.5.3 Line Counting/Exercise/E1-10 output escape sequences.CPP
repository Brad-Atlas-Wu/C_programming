#include<stdio.h>

main()
{	
	int c;
	while((c=getchar())!=EOF)
	{
		if(c=='\t')
			printf("\\t");
		else if (c=='\b')
			printf("\\b");
		else if(c=='\\')
			printf("\\\\");  //watch, here I add two backslashes before, to put out a "\\"
		else printf("%c",c);
	

		
	}
}
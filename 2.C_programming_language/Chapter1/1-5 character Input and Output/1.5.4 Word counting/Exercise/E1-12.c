/*
Question: Write a  program that prints its input one word per line

Method:
 when meet ' ' or '/n' or 'tab', output a '\n'
*/


#include<stdio.h>

main()
{
	int c;
	while((c=getchar())!=EOF)
	{	
		if(c==' '||c=='\t'||c=='\n')
			printf("\n");
		else putchar(c);
		
	}
}


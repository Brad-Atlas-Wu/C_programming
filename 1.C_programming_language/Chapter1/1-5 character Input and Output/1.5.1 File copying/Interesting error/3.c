#include<stdio.h>

/* copy input to output*/
main()
{
	int c;
while(c=getchar()!=EOF)    /* I miss the paraentheses around " c= getchar()" on purpose, so the c program will do the operation "!=" before "="*/
{
	printf("%d",c);
	
}


}
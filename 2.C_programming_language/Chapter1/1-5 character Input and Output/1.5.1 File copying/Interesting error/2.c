#include<stdio.h>

/* copy input to output*/
main()
{
	int c;
while((c=getchar())!=EOF)
{
	putchar(c);
	c=getchar();			/* because I have one more getchar here, so I will lose one input charater when output*/
}


}
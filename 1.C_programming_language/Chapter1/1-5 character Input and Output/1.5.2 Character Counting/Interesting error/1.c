#include<stdio.h>

main()
{
	long nc;
	nc=0;
	while(getchar()!=EOF)        
		nc++;
	printf("%ld\n",nc);
}

  /* it seems that compiler don't see '\n' as a end, so there are no output,
so I need to type crtl+z at the beginning of a newline to represent the EOF*/
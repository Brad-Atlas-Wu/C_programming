#include<stdio.h>
#define M 10


main()
{
	int M;
	for(M=1;M<=5;M++)				/* the charater M has occured at the " #define "line, so when I redefined it in the function, the compiler produce an error*/
		printf("s\n");
	
}
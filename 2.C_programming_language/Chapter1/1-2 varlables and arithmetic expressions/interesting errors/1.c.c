#include<stdio.h>

main()
{	
	double f;
	for(f=0;f<=300;f=f+20)
		printf("%.0f,%8.2f\n",f,(5.0/9.0)*(f-32.0));   /* the key is that here it must be (5.0/9.0),
															if I type (5/9), because must be a int ,so it will 
															always be a zero*/
}
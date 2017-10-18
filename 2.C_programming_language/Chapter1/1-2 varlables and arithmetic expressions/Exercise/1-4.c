#include<stdio.h>
double conversion(double);

main()
{	
	double c;
	printf("please print a centigrade degree:\n");
	scanf("%lf",&c);
	printf("%6.2lf\t%6.2lf\n",c,(c*(9.0/5.0))+32.0);

}
#include<stdio.h>
double conversion(double);

main()
{	
	double c;
	printf("please print a centigrade degree:\n");
	scanf("%f",&c);   /*here the "c" is double, but I use %f, which is paired with single-precision float, so this produces overflow error. I should use lf*/
	printf("%6.2f\t%6.2f\n",c,(c*(9.0/5.0))+32.0); /* In comparion, the l before f can be ignored in printf function*/

}
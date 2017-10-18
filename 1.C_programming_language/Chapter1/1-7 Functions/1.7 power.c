#include<stdio.h>
long power(int,int);

main()
{
	int x,y;
	printf("please enter the int and power:\n");
	scanf("%d %d",&x,&y);
	printf("the result is %ld\n",power(x,y));
}




long power(int x,int y)
{	
	int i,r=1;;
	for(i=0;i<y;i++)
	{
		
		r=r*x;
	}
return r;
}




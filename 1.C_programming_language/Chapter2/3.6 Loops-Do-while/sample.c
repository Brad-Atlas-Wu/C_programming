#include<stdio.h>
#define M 20
int itoa(char v[],int x);
int main()
{
	char v[M];
	int x,i,n;
	printf("please enter an integer:\n");
	scanf("%d",&x);
	n=itoa(v,x);
	for(i=n-1;i>=0;i--)
		printf("%c",v[i]);
	printf("\n");
	
	return 0;
}


int itoa(char v[],int x)
{	
	int i;
	if(x==0)
	{
		printf("0");
		return 0;
	}

	for(i=0;x>0;i++,x/=10)
	{
		 v[i]=x%10+'0';
	}

	
		
	v[i]='\0';
	return i;
}
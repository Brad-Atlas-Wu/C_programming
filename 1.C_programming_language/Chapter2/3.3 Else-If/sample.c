#include<stdio.h>
#define M 30
int search(int v[],int x);

int main()
{
	int x,i,n;
	int v[M];
	v[0]=0;
	for(i=0;i<M;i++)
	{
		v[i+1]=v[i]+1;
	}

	for(i=0;i<M;i++)
		printf("%d\t",v[i]);

	printf("please enter a x\n");
	scanf("%d",&x);
	n=search(v,x);
	if(n==-1)printf("can not find\n");
	else printf("下标是%d\n",n);

	return 0;
}

int search(int v[],int x)
{
	int mid;		//中值
	int low=0;		//下限
	int high=M-1;	//上限
	while(low<=high)
	{	
		mid=(low+high)/2;
		if(x>v[mid])
			low=mid+1;
		else if(x<v[mid])
			high=mid-1;
		else return mid;
	}
	return -1;
	
}
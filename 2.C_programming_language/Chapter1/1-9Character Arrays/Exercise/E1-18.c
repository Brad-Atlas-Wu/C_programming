#include<stdio.h>
#define M 100
int getline(char *);
int mvtrail(char *,int);
int main()
{	
	int n;
	char line[M];
	while((n=getline(line))>=0)
	{
		printf("%d\t%s",n,line);
		n=mvtrail(line,n);
		printf("%d\t%s",n,line);
	}
		
	return 0;
}

int getline(char line[])
{	
	int i;
	int c;
	for(i=0;i<M-1 && ((c=getchar())!=EOF) && c!= '\n'; i++)
	{
		line[i]=c;
	}
	if(c=='\n')				//注意这里，因为获得的\n也正常给了c，所以返回的长度就会是1，因此\n并不作为停止全部输入的标志，所以可以有空行
	{
		line[i]='\n';
		i++;
	}
	line[i]='\0';						// this statement can not be left out, it's the symbol of end 
	return i;

}

int mvtrail(char s[],int n)
{
	int i;
	int state=0;		
	for(i=n-2;s[i]==' ' || s[i]=='\t';i--)
	{
		s[i]=s[i+1];
		s[i+1]=s[i+2];
		
	}
	if(s[0]=='\n')
	{
		s[0]='\0';
		return 0;
	}
	return i+2;
}
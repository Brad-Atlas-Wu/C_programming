#include<stdio.h>
#define M 200
int getline(char *);
int main()
{
	int line[M];
	int n;
	while((n=getline(line))>0)
		if(n>=80)
			printf("%s",line);
	return 0;

}


int getline(char s[])
{	
	int i;
	int c;
	for(i=0;i<M-1 && (c=getchar())!=EOF && c!='\n';i++)
	{
		s[i]=c;
	}
	s[i]='\0';
	return i;
}


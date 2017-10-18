#include<stdio.h>
#define M 100
int getline(char *);
void reverse(char s[],int);
int main()
{	
	int n;
	char line[M];
	while((n=getline(line))>0)
	{
		reverse(line,n);
		printf("%s",line);
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
	if(c=='\n')				//ע�������Ϊ��õ�\nҲ��������c�����Է��صĳ��Ⱦͻ���1�����\n������Ϊֹͣȫ������ı�־�����Կ����п���
	{
		line[i]='\n';
		i++;
	}
	line[i]='\0';						// this statement can not be left out, it's the symbol of end 
	return i;

}


void reverse(char s[],int n)
{
	int i,j;
	char t;
	if((n-1)==2)
	{
		t=s[0];
		s[0]=s[1];
		s[1]=t;
	}
	if((n-1)%2==0)
	{
		if(s[0]=='\n')
		{
			printf("nothing");
		}
		else
		for(i=0,j=n-2;j>i;i++,j--)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
		}	
	}
	else
	{
		for(i=0,j=n-2;i!=j;i++,j--)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
			
	}
	


}



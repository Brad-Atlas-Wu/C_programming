
#include<stdio.h>
#define M 20
int getline(char *);
void cpystr(char *, char *);


int main()
{	
	char line[M],longest[M];
	int len;
	int max=0;
	while((len=getline(line))>0)        // this statement test if there is another line
	{
		if(len>max)
		{	
			max=len;
			cpystr(longest,line);
		}
		
	}
	if(max>0)
		printf("%d\t%s\n",max,longest);  //line[] and longest must be the char type here 
	else printf("please input a line\n");	// in case of error here
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
	line[i]='\0';						// this statement can not be left out, it's the symbol of end 
	return i-1;
//������Ҫע������������û�лس���֮����ÿ����ʾ�س�������Ϊ�Ҷ����һ���ո���Ϊ����
	//�����Ҫ��β�пո�Ļ���Ҫ����if c�ǿո���line[i]='\n'
}

void cpystr(char longest[],char line[])
{
	int i=0;
	while((longest[i]=line[i])!='\0')
		i++;
	longest[i]='\0';		/*ע�⣺ ����ط���Ϊlongest[i]=line[i]�Ѿ���\0������line[i]��
								֮��Ž���text�����Բ���Ҫ�ټ���longest[i]='\0'��һ����
							���Ҫע�����ִ�е�˳��
							*/

}
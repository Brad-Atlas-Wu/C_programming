
#include<stdio.h>
#define M 20
int getline(char *);
void cpystr(char *, char *);


int main()
{	
	char line[M],longest[M];
	int len;
	int max=0;
	char temp[M];
	int prevmax =0;
	int getmore = 0;
	while((len=getline(line))>0)        // this statement test if there is another line
	{
		if(line[len-1]!='\n')	      //**�������ԭ��û���������з�������һ�о�����
		{
			prevmax+=len;
			if(getmore==0)		//֮ǰ�����˻��з�������������һ�еĿ�ͷ���ǿ�ͷ���ǽ�β
			{
				cpystr(temp,line);
				
			}
		/*	if(max<prevmax)     //������̫����ΪʲôҪ�����
			{
				max=prevmax;
			}*/
				
			getmore=1;
		}
		else					//**���������˻��з�
		{
			if(getmore==1)
			{
				if(max<prevmax+len)
				{
				max=prevmax+len;
				cpystr(longest,temp);     //��Ϊû���޸�����getline��������\n��ֱ�ӽ������������ʹ𰸲�ͬ
				}
				getmore=0;
			}
			else if(max<len)
			{
				cpystr(longest,line);		
				max=len;
						
			}
				
			
			prevmax=0;
				
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
	if(c=='\n')				//ע�������Ϊ��õ�\nҲ��������c�����Է��صĳ��Ⱦͻ���1�����\n������Ϊֹͣȫ������ı�־�����Կ����п���
	{
		line[i]='\n';
		i++;
	}
	line[i]='\0';						// this statement can not be left out, it's the symbol of end 
	return i;

}

void cpystr(char longest[],char line[])
{
	int i=0;
	while((longest[i]=line[i])!='\0')
		i++;
	longest[i]='\0';		/*ע�⣺ ����ط���Ϊlongest[i]=line[i]�Ѿ���\0������line[i]��
								֮��Ž���text�����Բ���Ҫ�ټ���longest[i]='\0'��һ����
							*/

}
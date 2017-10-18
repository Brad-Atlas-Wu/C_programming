
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
		if(line[len-1]!='\n')	      //**表明如果原本没有遇到换行符，还在一行句子里
		{
			prevmax+=len;
			if(getmore==0)		//之前遇到了换行符，所以这里是一行的开头；是开头不是结尾
			{
				cpystr(temp,line);
				
			}
		/*	if(max<prevmax)     //还不是太明白为什么要有这个
			{
				max=prevmax;
			}*/
				
			getmore=1;
		}
		else					//**表明遇上了换行符
		{
			if(getmore==1)
			{
				if(max<prevmax+len)
				{
				max=prevmax+len;
				cpystr(longest,temp);     //因为没有修改下面getline程序，所以\n后直接结束，因此这里和答案不同
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
	if(c=='\n')				//注意这里，因为获得的\n也正常给了c，所以返回的长度就会是1，因此\n并不作为停止全部输入的标志，所以可以有空行
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
	longest[i]='\0';		/*注意： 这个地方因为longest[i]=line[i]已经将\0赋予了line[i]，
								之后才进行text，所以不需要再加上longest[i]='\0'这一句了
							*/

}

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
//另外需要注意的是这里最后并没有回车，之所以每次显示回车，是因为我多打了一个空格作为结束
	//如果想要结尾有空格的话，要加上if c是空格，让line[i]='\n'
}

void cpystr(char longest[],char line[])
{
	int i=0;
	while((longest[i]=line[i])!='\0')
		i++;
	longest[i]='\0';		/*注意： 这个地方因为longest[i]=line[i]已经将\0赋予了line[i]，
								之后才进行text，所以不需要再加上longest[i]='\0'这一句了
							因此要注意语句执行的顺序
							*/

}
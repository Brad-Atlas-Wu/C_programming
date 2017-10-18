
//This is the version I moify the getline() funtion
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
	int i,j;
	int c;
	for(i=0,j=0; ((c=getchar())!=EOF) && c!= '\n'; j++)
	{	
		if(i<M-1)		//set aside an arrray for '\0'
		{
			line[i]=c;
			++i;
		}
		
	}
	line[i]='\0';						// this statement can not be left out, it's the symbol of end 
	return j-1;

}

void cpystr(char longest[],char line[])
{
	int i=0;
	while((longest[i]=line[i])!='\0')
		i++;


}
#include<stdio.h>
#define IN 1
#define OUT 0
#define M 10			//M为单词长度的上限
int main()
{
	int status,c,i,j,nc[M],nw;
	for(i=0;i<M;i++)		//给数组赋初值
		nc[i]=0;
	status = OUT;
	nw = 0;

	while((c=getchar())!='\n')
	{
		if(c==' '||c=='\n'||c=='\t')
		{
			status= OUT;
		}
		else if(!status)
		{
			if(nw!=0)printf("\t");
			status = IN;
			nw++;	//计算单词数量
		}
		if(status)
		{
			nc[nw-1]++;		//nc用于储存每个单词的长度
			putchar(c);
		}
	}
	
	printf("\n");



	for(i=0;i<M;i++)		// i代表行，最大为M
	{
		for(j=0;j<nw;j++)		// j 代表列，最大为nw（单词数量）
		{
			
			printf("%c",nc[j]>=i+1?'*':' ');  //如果该单词长度大于或等于最大行数，则输出*，否则输出一个空格
			printf("\t");
			
		}
		printf("\n");
	}
	return 0;
}



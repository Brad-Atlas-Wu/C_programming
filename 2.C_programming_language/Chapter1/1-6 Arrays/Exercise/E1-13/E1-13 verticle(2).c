#include<stdio.h>
#define IN 1
#define OUT 0
#define M 10			//MΪ���ʳ��ȵ�����
int main()
{
	int status,c,i,j,nc[M],nw;
	for(i=0;i<M;i++)		//�����鸳��ֵ
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
			nw++;	//���㵥������
		}
		if(status)
		{
			nc[nw-1]++;		//nc���ڴ���ÿ�����ʵĳ���
			putchar(c);
		}
	}
	
	printf("\n");



	for(i=0;i<M;i++)		// i�����У����ΪM
	{
		for(j=0;j<nw;j++)		// j �����У����Ϊnw������������
		{
			
			printf("%c",nc[j]>=i+1?'*':' ');  //����õ��ʳ��ȴ��ڻ������������������*���������һ���ո�
			printf("\t");
			
		}
		printf("\n");
	}
	return 0;
}



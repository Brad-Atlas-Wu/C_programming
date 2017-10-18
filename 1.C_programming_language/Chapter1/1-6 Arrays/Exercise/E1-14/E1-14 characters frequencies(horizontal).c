/* Question: Write a program to print a histogram of the frequencies of different characters in its input

  Method: 1)set arrays to store the frequencies of each digit
		  2)use for loop to initiate them
		  3)input digits
		  4)text the type of input
		  5)print icons

*/






#include<stdio.h>

main()
{
	int i,c,nc[26],ndigits[10],nwhite;
	nwhite=0;
	for(i=0;i<26;i++)nc[i]=0;
	for(i=0;i<10;i++)ndigits[i]=0;
	while((c=getchar())!=EOF)
	{
		if(c>='0'&&c<='9')
			++ndigits[c-'0'];
		if(c>='a'&&c<='z')
			++nc[c-'a'];
		if(c==' '||c=='\t'||c=='\n')
			++nwhite;
	}



//output histogram

	for(i=0;i<26;i++)
{	
	printf("%c",'a'+i);
	while(nc[i]!=0)
	{
		printf("*");
		--nc[i];
	}
	printf("\n");
}


	for(i=0;i<10;i++)
	{
		printf("%c",'0'+i);
		while(ndigits[i]!=0)
		{
		printf("*");
		--ndigits[i];
		}
		printf("\n");
	
	}

printf("white:");
while(nwhite--!=0)printf("*");










}




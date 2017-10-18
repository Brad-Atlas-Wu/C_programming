/*#include<stdio.h>

main()
{
	int i,c,nc[10];
	int a[10][10];
	int l,r;
	for(i=0;i<10;i++)nc[i]=0;
	
	while((c=getchar())!=EOF)
	{
	
		if(c>='a'&&c<='j')
			++nc[c-'a'];
	}



//output histogram


	for(i=0;i<10;i++)
		printf("%4c",'a'+i);
	printf("\n");



	for(l=0;l<10;l++)
	{
		for(r=0;r<10;r++)
		{
			if(nc[r]!=0){nc[r]--; a[l][r]='*';}
			else a[l][r]=' ';
		}
	
	}


	for(l=0;l<10;l++)
	{
		for(r=0;r<10;r++)
			printf("%4c",a[l][r]);
		printf("\n");
	}

}
*/






#include<stdio.h>

main()
{
	int i,c,nc[26],ndigits[10],nwhite;
	int a[10][37];
	int l,r;
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
		printf("%4c",'a'+i);
	for(i=0;i<10;i++)
		printf("%4c",'0'+i);
	printf("  whitespace\n");



	for(l=0;l<10;l++)
	{
		for(r=0;r<26;r++)
		{
			if(nc[r]!=0){nc[r]--; a[l][r]='*';}
			else a[l][r]=' ';
		}
		for(r=26;r<36;r++)
		{
			if(ndigits[r]!=0){ndigits[r]--; a[l][r]='*';}
			else a[l][r]=' ';
		}
		if(nwhite!=0){nwhite--; a[l][36]='*';}
		else a[l][36]=' ';
		
	}


	for(l=0;l<10;l++)
	{
		for(r=0;r<37;r++)
			printf("%4c",a[l][r]);
			printf("\n");
	}
}





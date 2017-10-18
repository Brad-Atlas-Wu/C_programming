/*
	Question: count the occurance of white space ,numerical digits and otherdigits.
*/

/*
	Method: 1)set arrays for each digis
			2)use for loop to initiate them
			3)input and count
*/

#include<stdio.h>

main()
{
	int ndigits[10];
	int nothers,nwhite,i,c;
	nwhite=nothers=0;
	for(i=0;i<10;i++)
		ndigits[i]=0;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\n'||c=='\t')
			++nwhite;
		else if(c>=0 &&c<=9)  // here I leave out the single quotes around 0 and 9, actually when I input numbers 0 to 9,I give the char type 0 to 9 to c,				  	 
		ndigits[c-'0']++;    //so the real value of c is from 48 to ~~. as a result ,ndigits[i] must be 0
		else ++nothers;

	}
	for(i=0;i<10;i++)
		printf("the num %d occurs %d times\n",i,ndigits[i]);
	printf("white spaces occur %d times\n others occur %d times \n",nwhite,nothers);
}
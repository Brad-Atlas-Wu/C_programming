#include<stdio.h>


/*copy the input to output*/

main()
{
	int c;						//c should be big engouh to hold the value of any character , so we use int.
	while(c=getchar()!=EOF)
	  	 printf("%c",c);
	
}
	 
 /* 1) I leave out the parentheses around "c=getchar()",because the != has a higher precedence than  "=",
 as a result, the compiler execute the "getchar!=EOF "firstly, and if there is input, the result
 is 1. so the statement putchar(c) will output the corresponding character of "\1". 
    
	2)the printf("%c",c) produce the same result as putchar(c);

    3) when I type a character, in will output two "\1", 
	   that is because the compiler take the "newline"ket into account.

  
	think: how to solve the problem in 3)

*/
		  
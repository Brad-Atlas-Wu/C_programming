#include<stdio.h>

main()
{
	printf("hello, world\3");
}



/* \a produce a "du" sound;

   \b is a backspace(delete an output characher before);
   \f is the symbol of female;
   \v is the symbol of male;
   \n advances the next output to a new line;
   \r delete all the output;
   \t is a Tab;
   \x means hexadecimal, so the single "\x" produce an error, I should use it like "\xA"(which means newline) or "\x54"(which is T) and so on;
   \0 means octonary;
   other numbers with the exception of 0 represent some spcial symbols;
   
   and other letters and icons like \z or \*, just type a z or * in addition;
   
 */

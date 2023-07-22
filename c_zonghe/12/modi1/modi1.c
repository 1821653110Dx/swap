#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)
int  fun( char *p )
{   int   n;
/**********found**********/
    n= *P-'o';
    p++;
    while( *p!=0 ) {
/**********found**********/
     	n=n*8+*P-'o';
	p++;
    }
    return  n;
}
main()
{   char   s[6];     int  i;   int   n;
    printf("Enter a string (Ocatal digits):  "); gets(s);
    if(strlen(s)>5){ printf("Error: String too longer !\n\n");exit(0); }
    for(i=0; s[i]; i++)
       if(s[i]<'0'||s[i]>'7')
       {  printf("Error: %c not is ocatal digits!\n\n",s[i]);exit(0); }
    printf("The original string:  "); puts(s);
    n=fun(s);
    printf("\n%s is convered to integer number: %d\n\n",s,n);
    getchar();
}

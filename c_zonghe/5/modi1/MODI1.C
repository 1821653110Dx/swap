#include <stdio.h>
void fun( char *p )
{   char   max,*q;   int   i=0;
    max=p[i];
    q=p;
    while( p[i]!=0 )
    {   if( max<p[i] )
	{  max=p[i];
/**********found**********/
	   q=p+i
	}
        i++;
    }
/**********found**********/
    wihle(  q>p )
    {  *q=*(q-1);
       q--;
    }
    p[0]=max;
}
main()
{  char   str[80];
   printf("Enter a string:  "); gets(str);
   printf("\nThe original string:      ");  puts(str);
   fun(str);
   printf("\nThe string after moving:  ");  puts(str); printf("\n\n");
   getchar();
}

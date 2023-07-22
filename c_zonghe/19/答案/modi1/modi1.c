#include   <stdio.h>
#include   <string.h>
#include   <ctype.h>
#pragma warning (disable:4996)
void fun( char  *s )
{  int  i;
/**********************found***********************/
   static  int  n = 1;   
   if ( n++ %2 )
/**********************found***********************/
      for(i=0;i<strlen(s);i++)    
         printf("%c", islower(s[i]) ? toupper(s[i]) : s[i]);
   else
/**********************found***********************/
      for (i = strlen(s)-1; i>=0; i--)   
         printf("%c", s[i]);
}
main( )
{  int  i;
   char s[] = "Hello, C Programmer";
   for (i=0; i<5; i++) {  fun(s);    printf("\n");   }
}

#include <ctype.h>
#include <string.h>
/************found************/
#include  <stdio.h>
/************found************/
void upfst ( char  *p )
{  int  k=0;
   for ( ; *p; p++ )
      if ( k )
      {   if ( *p == ' ' )   k = 0;   }
      else  if ( *p != ' ' )
      {   k = 1;   *p = toupper( *p ); }
}

main( )
{   char   chrstr[81];
    printf( "\nPlease enter an English text line: " );   gets( chrstr );
    printf( "\n\nBefore changing:\n  %s", chrstr );
    upfst(  chrstr );
    printf( "\nAfter changing:\n  %s\n", chrstr );
    getchar();
}

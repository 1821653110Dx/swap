#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
int fun(char  *s)
{ int  sum=0;
  while(*s) {
/**********found**********/
    if( isdigit(*s) )  sum+= *s- __1__ ;
/**********found**********/
    __2__;
  }
/**********found**********/
  return  __3__ ;
}
main()
{ char  s[81];    int  n;
  printf("\nEnter a string:\n\n");  gets(s);
  n=fun(s);
  printf("\nThe result is:  %d\n\n",n);
  getchar();
}

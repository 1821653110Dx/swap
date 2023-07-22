#include  <stdio.h>
int fun(char  *s, char  *t)
{ int  n=0;
  while(*s)
  { if(*s < 97) {
/**********found**********/
     *(t+n)= __1__ ;  n++;  }
/**********found**********/
     __2__ ;
  }
  *(t+n)=0;
/**********found**********/
  return  __3__ ;
}
main()
{ char  s[81],t[81];    int  n;
  printf("\nEnter a string:\n");  gets(s);
  n=fun(s,t);
  printf("\nThere are %d letter which ASCII code is less than 97: %s\n",n,t);
  getchar();
}

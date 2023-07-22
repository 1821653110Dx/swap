#include  <stdio.h>
#include  <ctype.h>
#pragma warning (disable:4996)
void fun(char ch)
{ char t[3];
  int i;
  t[1]=ch;
/**********************found***********************/
  if (ch=='Z'){  t[2]='A';  t[0]= ____(1)____  ;    }
/**********************found***********************/
  else if (ch=='A')  {t[2]='B';   t[0]= ____(2)____; }
/**********************found***********************/
  else { t[0]=ch-1;  t[2]= ____(3)____;}
  for(i=0;i<3; i++) putchar(t[i]);
  putchar('\n');
}
main( )
{ char c;
  do
  { printf(" enter a upper letter:");
    c=getchar(); getchar(); 
  }
  while(!isupper(c));
  fun(c);
}

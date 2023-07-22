#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
void fun(char  *s)
{ int  k[26]={0},n,i,max=0;    char  ch;
  while(*s)
  { if( isalpha(*s) ) {
/**********found**********/
      ch=tolower(__1__);
      n=ch-'a';
/**********found**********/
      k[n]+= __2__ ;
    }
    s++;
/**********found**********/
    if(max<k[n]) max= __3__ ;
  }
  printf("\nAfter count :\n");
  for(i=0; i<26;i++)
     if (k[i]==max) printf("\nletter  \'%c\' :  %d times\n",i+'a',k[i]);
}
main()
{ char  s[81];
  printf("\nEnter a string:\n\n");  gets(s);
  fun(s);
   getchar();
}

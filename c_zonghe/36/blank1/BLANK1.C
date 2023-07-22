#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
int fun(char  *s)
{ char  *lp,*rp;
/**********found**********/
  lp= __1__ ;
  rp=s+strlen(s)-1;
  while((toupper(*lp)==toupper(*rp)) && (lp<rp) ) {
/**********found**********/
     lp++; rp __2__ ; }
/**********found**********/
  if(lp<rp) __3__ ;
  else   return 1;
}
main()
{ char  s[81];
  printf("Enter a string:  ");  scanf("%s",s);
  if(fun(s)) printf("\n\"%s\" is a Palindrome.\n\n",s);
  else printf("\n\"%s\" isn't a Palindrome.\n\n",s);
  getchar();
}

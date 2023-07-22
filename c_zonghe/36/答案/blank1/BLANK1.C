#include  <stdio.h>
#include  <string.h>
#include  <ctype.h>
int fun(char  *s)
{ char  *lp,*rp;
/**********found**********/
  lp=s ;
  rp=s+strlen(s)-1;
  while((toupper(*lp)==toupper(*rp)) && (lp<rp) ) {
/**********found**********/
     lp++; rp -- ; }
/**********found**********/
  if(lp<rp) return 0 ;
  else   return 1;
}
main()
{ char  s[81];
  printf("Enter a string:  ");  scanf("%s",s);
  if(fun(s)) printf("\n\"%s\" is a Palindrome.\n\n",s);
  else printf("\n\"%s\" isn't a Palindrome.\n\n",s);
  getchar();
}

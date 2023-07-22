#include <stdio.h>
#include <string.h>

void fun (char  *s, char  *t)
{
/************found************/
    int   i;
    i=0;
    sl = strlen(s);
    for (; i<sl; i++)
/************found************/
       t[i] = s[sl-i];
    for (i=0; i<sl; i++)
	 t[sl+i] = s[i];
    t[2*sl] = '\0';
}

main()
{  char s[100], t[100];
   printf("\nPlease enter string s:"); scanf("%s", s);
   fun(s, t);
   printf("The result is: %s\n", t);
   getchar();
}

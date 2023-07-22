#include  <stdio.h>
#include  <string.h>
#define   N   5
#define   M   15
void fun(char  (*ss)[M], char  *substr)
{ int  i,find=0;
/**********found**********/
  for(i=0; i< N ; i++)
/**********found**********/
    if( strstr(ss[i], substr) != NULL )
    {  find=1;  puts(ss[i]);  printf("\n");  }
/**********found**********/
    if (find==0) printf("\nDon't found!\n");
}
main()
{ char  x[N][M]={"BASIC","C langwage","Java","QBASIC","Access"},str[M];
   int  i;
   printf("\nThe original string\n\n");
   for(i=0;i<N;i++)puts(x[i]);  printf("\n");
   printf("\nEnter a string for search :  ");  gets(str);
   fun(x,str);
   getchar();
}

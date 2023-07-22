#include   <stdio.h>
#include   <ctype.h>
#pragma warning (disable:4996)
void fun(int *cd, int *cu, int *cs )
{  char  c;
   printf("用回车键结束输入！\n");
   while ((c=getchar()) != '\n')
   {
/**********************found***********************/
      if (c>='0' && c<='9')  ++*cd;
/**********************found***********************/
      if (c>='A' && c<='Z')  ++*cu;
/**********************found***********************/
      if (c>='a' && c<='z')  ++*cs;
   }
}

main( )
{  int cd, cu, cs;
   cd = cu = cs = 0;
   fun( &cd, &cu, &cs );
   printf("数字的个数: %d\n", cd);
   printf("大写字母的个数: %d\n", cu);
   printf("小写字母的个数: %d\n", cs);
}

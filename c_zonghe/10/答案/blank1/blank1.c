#include   <stdio.h>
#include   <ctype.h>
#pragma warning (disable:4996)
void fun(int *cd, int *cu, int *cs )
{  char  c;
   printf("�ûس����������룡\n");
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
   printf("���ֵĸ���: %d\n", cd);
   printf("��д��ĸ�ĸ���: %d\n", cu);
   printf("Сд��ĸ�ĸ���: %d\n", cs);
}

#include   <stdio.h>
#include   <ctype.h>
#pragma warning (disable:4996)
void fun(int *cd, int *cu, int *cs )
{  char  c;
   printf("�ûس����������룡\n");
   while ((c=getchar()) != '\n')
   {
/**********************found***********************/
      if (c>='0' && ____(1)____)  ++*cd;
/**********************found***********************/
      if (____(2)____ && c<='Z')  ++*cu;
/**********************found***********************/
      if (c>='a' && ____(3)____)  ++*cs;
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

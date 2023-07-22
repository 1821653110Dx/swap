#include   <stdio.h>
void fun( int  n )
{  int  j, b, c, m, flag=0;
   for (b=1; b<=n/2; b++) { 
/**********found**********/
      n = m;
      c = b;
      while (m !=0 && m>=c) {
/**********found**********/
        m = m - c;    c++
      }
/**********found**********/
      if ( m!=0)
      {  printf("%d=", n);
         for (j=b; j<c-1; j++)   printf( "%d+", j  );
         printf("%d\n", j);
         flag=1;
      }
   }
   if(flag==0)
     printf("不能分解\n");
}
main()
{  int  n;
   printf("请输入一个整数 :   ");   scanf("%d", &n);
   fun(n);
   getchar();
}

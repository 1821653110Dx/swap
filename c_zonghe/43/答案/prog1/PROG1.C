#include <stdio.h>
void fun(int a, int b, long *c)
{
    int a_up,a_low,b_up,b_low;
    a_up=a/10;   
    a_low=a%10;  
    b_up=b/10;   
    b_low=b%10;  
    *c=b_up*1000+a_up*100+b_low*10+a_low;  
}
main()   /* 主函数 */
{  int a,b; long c;void NONO ();
   printf("Input a b:");
   scanf("%d%d", &a, &b);
   fun(a, b, &c);
   printf("The result is: %ld\n", c);
   NONO();
  getchar();
}
void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  int i, a,b ; long c ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%d,%d", &a, &b) ;
    fun(a, b, &c) ;
    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}


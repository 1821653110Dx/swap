#include    <stdio.h>
#pragma warning (disable:4996)
int  cube(int  n)  { return n*n*n; }
int  fun( int *n)
{  int  a,b,c,i,k=0; 
   for (i=100; i<1000; i++)  
   {  
/*****************found*****************/
      a = i % 100;
      b = i / 10 % 10;    
      c = i % 10;         
/*****************found*****************/
      if(cube(a)+cube(b)+cube(c) = i)
      {  n[k]=i; 	  k++;}
   }
 /*****************found*****************/
   return  k-1 ;
}
main()
{
   int  n[100],k,i;
   k=fun(n);
   for(i=0;i<k;i++)printf("%d ", n[i]);
   printf("\n");
}

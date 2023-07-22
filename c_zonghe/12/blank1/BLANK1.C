#include  <stdio.h>
unsigned long fun(unsigned long  n)
{  unsigned long  x=0, s, i;   int  t;
   s=n;
/**********found**********/
   i=__1__;
/**********found**********/
   while(__2__)
   {  t=s%10;
      if(t%2==0){
/**********found**********/
         x=x+t*i;  i=__3__;
      }
       s=s/10;
   }
   return  x;
}
main()
{  unsigned long  n=-1;
   while(n>99999999||n<0)
  { printf("Please input(0<n<100000000): ");  scanf("%ld",&n);  }
  printf("\nThe result is: %ld\n",fun(n));
  getchar();
}

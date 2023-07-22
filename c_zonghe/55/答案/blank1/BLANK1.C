#include  <stdio.h>
typedef struct
{ char num[8];     /* 学号 */
  double score[2]; /* 两门课成绩 */
/**********found**********/
}STU ;
int  fun(STU  std[ ], int  n)
{  int  i, k=0;
   for(i=0; i<n; i++)
/**********found**********/
     if( (std[i].score[0]<60) || (std[i].score[1]<60) ) 
     { k++;     printf("学号：%s ",std[i].num);   }
/**********found**********/
   return k ;
}
main()
{  STU  std[4]={ "N1001", 76.5,82.0 ,"N1002", 53.5,73.0, 
                "N1005", 80.5,66.0,"N1006", 81.0,56.0 };
  printf( "\n共有%d位学生有不及格科目\n" , fun(std,4) );
  getchar();
}

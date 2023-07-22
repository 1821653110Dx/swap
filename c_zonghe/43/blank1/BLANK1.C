#include   <stdio.h>
#include   <string.h>
struct student {
  long  sno;
  char  name[10];
  float  score[3];
};
/**********found**********/
__1__ fun(struct  student  a)
{ int  i;
  a.sno = 10002;
/**********found**********/
  strcpy(__2__, "LiSi");
/**********found**********/
  for (i=0; i<3; i++) __3__+= 1;
  return  a;
}
main()
{ struct student  s={10001,"ZhangSan", 95, 80, 88}, t;
  int  i;
  printf("\n\nThe original data :\n");
  printf("\nNo: %ld  Name: %s\nScores:  ",s.sno, s.name);
  for (i=0; i<3; i++)  printf("%6.2f ", s.score[i]);
  printf("\n");
  t = fun(s);
  printf("\nThe data after modified :\n");
  printf("\nNo: %ld  Name: %s\nScores:  ",t.sno, t.name);
  for (i=0; i<3; i++)  printf("%6.2f ", t.score[i]);
  printf("\n");
  getchar();
}

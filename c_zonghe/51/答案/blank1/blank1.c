#include<stdio.h>
typedef struct stu
{
	char ID[30];
	char name[20];
	int score[2];
} STU;
int fun(STU *d,int n)
{
	int i,m;
	/******found******/
	m=0;
	for(i=1;i<n;i++)
	/******found******/
		if(d[i].score[0]+d[i].score[1]>d[m].score[0]+d[m].score[1])
			m=i;
	/******found******/
	return m;
}

void main()
{
	STU a[10]={ "2016500301","����ˮ",83,92,"2016500336","������",85,94,"2016500371","���ӳ�",88,88};
	int i,n=3;
	i=fun(a,n);
	printf("%30s%20s%4d%4d",a[i].ID,a[i].name,a[i].score[0],a[i].score[1]);
	printf("\n");
}

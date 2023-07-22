#include <stdio.h>

void func(int xx[], int num)
{
	int n1,n2,pos,i,j;
	pos=xx[9];
	if (num > pos)
/**********found**********/
		xx[10] = __(1)___;
	else {
		for(i=0;i<10;i++)
		{
			if(xx[i]>num){
				n1=xx[i];
				xx[i]=num;
				for(j=i+1;j<11;j++){
					n2=xx[j];
					xx[j] = n1;
/**********found**********/
					_____(2)____;
				}
/**********found**********/
				_____(3)_____;
			}
		}
	}
}

int main()
{
	int xx[11] = {2,5,7,10,17,51,63,73,85,99};
	int i,num;
	printf("original array is:\n");
	for(i=0;i<10;i++) printf("%5d",xx[i]);
	printf("\n");
	printf("insert a new number:");
	scanf("%d", &num);
	func(xx, num);
	for(i=0;i<11;i++) printf("%5d", xx[i]);
	printf("\n");
	return 0;
}

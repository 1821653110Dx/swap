#include <stdio.h>

int func(int (*p)[4], int m, int n, int *pRow, int *pCol)
{
	int i, j, max;
/**********found**********/
	max = **p;
	*pRow = 0;
	*pCol = 0;
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if ( *(*(p+i)+j) > max)
			{
				max = *(*(p+i) + j);
				*pRow = i;
/**********found**********/
				*pCol =j;
			}
		}
	}
/**********found**********/
	return max;
}

int main()
{
	int aa[3][4] = {{1,3,5,7},{21,19,27,22},{11,17,18,20}};
	int maxVal, row, col;
	maxVal = func(aa, 3, 4, &row, &col);
	printf("%d %d %d\n", maxVal, row, col);
	return 0;
}

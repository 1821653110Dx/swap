#include  <stdio.h>
struct pair {
	int n1, n2;
};

struct pair fun(int* c, int d) {
	int i;
/**********************found***********************/
	struct pair p;
	p.n1 = p.n2 = 0;
/**********************found***********************/
	for (i=0; i<d; i++) {
		if (c[i] % 2 == 0)
			p.n1++;
		else
/**********************found***********************/
			p.n2++;
	}
	return p;
}

int main( ) {
	int i, c[100], d;
	struct pair p;

	printf("请输入数值的个数：");
	scanf("%d", &d);

	printf("请输入%d个数值：", d);
	for (i = 0; i < d; i++)
	scanf("%d", &(c[i]));

	p = fun(c, d);
	printf("n1=%d,n2=%d", p.n1, p.n2);
	return 0;
}

#include  <stdio.h>
struct pair {
	int n1, n2;
};

struct pair fun(int* c, int d) {
	int i;
/**********************found***********************/
	___(1)____;
	p.n1 = p.n2 = 0;
/**********************found***********************/
	for (i=0; i<d; ____(2)____) {
		if (c[i] % 2 == 0)
			p.n1++;
		else
/**********************found***********************/
			____(3)____
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

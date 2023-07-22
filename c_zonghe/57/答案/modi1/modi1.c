#include <stdio.h>
#include <string.h>

int fun(char* str) 
{  
	int i, k;

	i = 0;
/**********************found***********************/
	for (k=0; k<strlen(str); k++) //从0开始，最后一个是str长度-1
	{
/**********************found***********************/
		if ( (str[k] >= '0') && (str[k] <= '9') ) //字符比较
			 i = i * 10 + str[k] - '0';//通过-‘0’字符，将字符转换成具体数值
	}
/**********************found***********************/
	return i;//返回值
}

int main()
{ 
	char str[100];
	int l;
	printf("input string:");
	scanf("%s", str);
	l = fun(str);
	printf("num:%d\n", l);
	return 0;
}

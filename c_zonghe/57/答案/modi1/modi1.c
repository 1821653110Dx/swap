#include <stdio.h>
#include <string.h>

int fun(char* str) 
{  
	int i, k;

	i = 0;
/**********************found***********************/
	for (k=0; k<strlen(str); k++) //��0��ʼ�����һ����str����-1
	{
/**********************found***********************/
		if ( (str[k] >= '0') && (str[k] <= '9') ) //�ַ��Ƚ�
			 i = i * 10 + str[k] - '0';//ͨ��-��0���ַ������ַ�ת���ɾ�����ֵ
	}
/**********************found***********************/
	return i;//����ֵ
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

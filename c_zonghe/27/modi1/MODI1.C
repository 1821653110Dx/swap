#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
void fun(char* str, int *c0, int *c1) {  
	int k;
/**********found**********/
	c0 = c1 = 0;
/**********found**********/
	for (k=1; k<strlen(str); k++) {
/**********found**********/
		if ( (str[k] >= 'A') && (str[k] <= 'Z') ) *c0++;
		if ( (str[k] >= 'a') && (str[k] <= 'z') ) (*c1)++;
	}
}

main()
{ char str[100]; int c0,c1;
  printf("input string:");
  scanf("%s", str);
  fun(str, &c0, &c1);
  printf("c0=%d,c1=%d\n", c0, c1);
}

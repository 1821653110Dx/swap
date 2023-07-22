#include <stdio.h> 
#include <string.h> 
#pragma warning (disable:4996)
void fun( char *s1, char *s2, char *s3)
{   int i,j;
/**********************found***********************/
	for(i = 0, j = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++, j = j + 1)  
	{   	s3[j] = s1[i];   
		s3[j+1] = s2[i];   
	}    
	if (s2[i] != '\0')  
	{   	for(; s2[i] != '\0'; i++, j++)   
/**********************found***********************/
		     s3[i] = s2[j];  
	}   
	else if (s1[i] != '\0')  
	{   for(; s1[i] != '\0'; i++, j++)       
			s3[j] = s1[i];
	}
/**********************found***********************/
	s3[j-1] = '\0';
}
void main() 
{  	char s1[128], s2[128], s3[255];  
	printf("Please input string1:"); 
	gets(s1);   
	printf("Please input string2:");  
	gets(s2);    
	fun(s1,s2,s3);
	printf("string:%s\n", s3);   
} 

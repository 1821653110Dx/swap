#include <stdio.h>
#include <string.h>
void fun(char * s0,char *s1,char *s2, char *s3)
{
 int i,j,k,t;
 j=k=t=0;
 for(i=0;i<strlen(s0);i+=3)
 {
  
  s1[j++]=s0[i];
  if(i+1<strlen(s0))
   s2[k++]=s0[i+1];
  if(i+2<strlen(s0))
   s3[t++]=s0[i+2];
 }
 s1[j]='\0';
 s2[k]='\0';
 s3[t]='\0';
}
void main()
{
    void NONO();
	char  s0[100],s1[40],s2[40],s3[40];
	printf("ÇëÊäÈëÒ»ÐÐ×Ö·û´®\n");
	gets(s0);
	fun(s0,s1,s2,s3);
	puts(s1);
	puts(s2);
	puts(s3);
	NONO();
}
void NONO()
{
    FILE *fp = fopen("out.dat", "w");
    char s0[10][100]={"1234567890qazwsx","abcdefghij","0987654321plmokn","fsdjfsdlrj564342dsf",
    "gfdklgjdsfl4754398","zxcvbnmasdfg","asdfghjkl123","qwertyuiop456","qweasdzxc789",
    "poiuytrewqwsxqaz"};
    char s1[40],s2[40],s3[40];
    int i;
    for(i=0;i<10;i++)
    {
        fun(s0[i],s1,s2,s3);
        fprintf(fp,"s1=%s,s2=%s,s3=%s\n", s1,s2,s3);
    }
    fclose(fp);
}

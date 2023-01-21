#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,count=0;
	char s[25],r[25];
	printf("enter the string:");
	gets(s);
	printf("reverse string:");
	for(i=strlen(s)-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	return 0;
}

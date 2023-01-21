#include<stdio.h>
int main()
{
	int i,j,count=0;
	char s[25];
	printf("enter the string:");
	gets(s);
	for(i=0;s[i];i++)
	{
		count=count+1;
	}
	printf("length of a string:%d",count);
	return 0;
}

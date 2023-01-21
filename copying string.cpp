#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],c[100];
	int i;
	printf("enter the string:");
	gets(s);
	printf("copied string:\n");
	for(i=0;s[i];i++)
	{
		c[i]=s[i];
		printf("%c",c[i]);
	}
	return 0;
}

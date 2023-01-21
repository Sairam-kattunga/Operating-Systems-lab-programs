#include<stdio.h>
int main()
{
	int i,j,n,a,b,count=0;
	printf("enter the start and end limit:");
	scanf("%d%d",&a,&b);
	printf("prime numbers between %d and %d :",a,b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				count = count+1;
			}
		}
		if(count == 0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

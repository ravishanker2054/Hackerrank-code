#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
			
		}
	}
	if(c>2)
	printf("%d is not prime",i);
	else
	printf("num is prime");
}

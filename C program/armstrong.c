#include<stdio.h>
int main()
{
	int n,r,p=0;
	scanf("%d",&n);
	int k;
	k=n;
	while(n!=0)
	{
		r=n%10;
		p+=r*r*r;
		n=n/10;	
	}
	
	if(k==p)
	{
		printf("given num is armstrong");
	}
	else
	{
		printf("given num is not amstrong");
	}
}

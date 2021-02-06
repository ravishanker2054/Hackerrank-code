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
		p=p*10+r;
		n=n/10;
	printf("%d\n",p);	
	}
	
	if(k==p)
	{
		printf("given num is palindrome");
	}
	else
	{
		printf("given num is not palindrome");
	}
}

#include<stdio.h>
int main()
{
	int n,r,p=0;
	scanf("%d",&n);
	int k;
	n=k;
	while(k!=0)
	{
		r=k%10;
		p=p*10+r;
		k=k/10;
	}
	if(n==p)
	{
		printf("%d is palindrome",n);
	}
	else
	{
		printf("%d is not palindrome",n);
	}
}

#include<stdio.h>
int main()
{
	int i,n,j,k;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("#");
		}
		printf("\n");
	}
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,c,j;
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
{
	c=0;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			c++;
		}
		
	}

if(c<=2)
{
	printf("%d",i);
	
}
}

}

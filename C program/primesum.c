#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,c=0,j;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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
			printf("%d is  prime ",i);
		}
		else if(c>2)
		{
			printf("%d is not prime",i);
		}
	



}
}

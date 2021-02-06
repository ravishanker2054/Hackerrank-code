#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,v;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		if(v==a[i])
		{
		
		printf("found:%d",a[i]);
		exit(0);
	    }
	}
	    printf("not found");
}

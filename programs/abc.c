#include<stdio.h>
int main()
{
	int i,j,n,p,x,m=26;
	int a[m];
	char b[n];
	scanf("%d",&n);
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		
	}
		for (j=0;j<n;j++)
	{
		scanf("%s",&b[j]);
		
	}
	
	for(j=0;j<=n;j++)
	{
		p=((int)b[j]-96);
	      // x=p-96;
	
	printf("%d",p);
	
}
	
}

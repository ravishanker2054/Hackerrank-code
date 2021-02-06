#include<stdio.h>
int main()
{
	int i,j,n,p,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
		
	
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
		
			count++;
			a[j]=0;
			break;
		     }
		 }
	}
	}	
	printf("%d",count);


	
}


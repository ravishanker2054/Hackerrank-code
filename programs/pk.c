#include<stdio.h>
void main(){
	int n,j,i,c=1,d=1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	for(i=0;i<n;i++)
	
	{
		if(a[i]!=0)
		{
		
		for(j=i+1;j<n;j++)
		{
				if(abs(a[i]-a[j])<=1)
				c++;
				a[j]=0;
		
		}
	
	}
		if(c>d)
		
		d=c;
	}

		
	printf("%d",d);
}

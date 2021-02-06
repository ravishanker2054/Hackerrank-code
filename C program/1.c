#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	scanf("%d",&n);
	float a[n],t;
	for(i=0;i<n;i++)
	scanf("%f",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-i-1;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>2.0)
		{
			c++;
			a[i]=0;
		}
	}
	for(i=0;i<n;i++)
	printf("%0.2f\t",a[i]);
	printf("%d",c);
}


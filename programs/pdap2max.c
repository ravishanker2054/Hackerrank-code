#include<stdio.h>
int maxi(int [],int);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   	int max=maxi(a,n);
   	printf("%d",max);
}
int maxi(int a[],int n)
{
	int i,l=a[0];
	for(i=1;i<n;i++)
	{
		if(l<a[i])l=a[i];
	}
	return l;
}


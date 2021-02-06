#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   	int min=mini(a,n);
   	int maxs=MaxSum(a,min,n);
    printf("%d",maxs);
}
int mini(int a[],int n)
{
	int i,l=a[0];
	for(i=1;i<n;i++)
	{
		if(l>a[i])l=a[i];
	}
	return l;
}
int MaxSum(int a[],int min,int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(min!=a[i])c=c+a[i];
	}
	return c;
}


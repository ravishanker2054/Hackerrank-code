#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int tall=max(a,n);
	printf("%d",tall);
}
int max(int a[],int n)
{
	int i,l=a[0],c=0;
	for(i=1;i<n;i++)
	if(l<a[i])l=a[i];
	for(i=0;i<n;i++)
	if(l==a[i])c++;
	return c;
}


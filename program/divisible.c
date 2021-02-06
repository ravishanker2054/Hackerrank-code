#include<stdio.h>
int main()
{
	int n,k,i,j,c=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	{
	for(i=j+1;i<n;i++)
	{
	if((a[j]+a[i])%k==0)c++;
    }
    }
	printf("%d",c);
}

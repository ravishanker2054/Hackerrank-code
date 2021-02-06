#include<stdio.h>
int main()
{
	int n,b,sum=0,k,i,x;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&b);
    for(i=0;i<n;i++)
	{
	sum+=a[i];
    }
    x=(sum-a[k])/2;
    if(x==b)printf("Bon Appetit");
    else
    printf("%d",b-x);
	
}

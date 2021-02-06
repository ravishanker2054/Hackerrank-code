#include<stdio.h>
int main()
{
	int i,n,h,l,high=0,low=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	h=a[0];
	l=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<l)
		{
			l=a[i];
			low++;
		}
		if(a[i]>h)
		{
			h=a[i];
			high++;
		}
	}
	printf("%d %d",high,low);
	return 0;
}

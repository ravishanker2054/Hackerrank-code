#include<stdio.h>
int main()
{
	int i,j,n,d,m,c=0,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    scanf("%d %d",&d,&m);
    for(j=0;j<n-m+1;j++)
    {
    	for(i=j;i<m+i;i++)
    	{
    		sum+=a[i];
		}
		if(sum==0)c++;
    	
	}
	printf("%d",c);

}

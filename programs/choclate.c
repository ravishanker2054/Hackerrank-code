#include<stdio.h>
void main(){
	int n,j,i,m,c=0,d;
	scanf("%d",&n);
	int a[n],sum=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d%d",&d,&m);
	//scanf("%d",&m);
	for(j=0;j<n-m+1;j++)
	{
		sum=0;
		for(i=j;i<m+i;i++)
		{
			sum+=a[i];
		}
		if(sum==d)
		c++;
	}

		
	printf("%d",c);
}

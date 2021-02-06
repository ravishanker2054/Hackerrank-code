#include<stdio.h>
int main()
{
    int n,i,a[5];
    for(i=0;i<5;i++)
    a[i]=0;
	scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		if(b[i]==1)a[0]++;
		else if(b[i]==2)a[1]++;
		else if(b[i]==3)a[2]++;
		else if(b[i]==4)a[3]++;
		else
		a[4]++;
	}
    int	m=0;
	int max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max){
		max=a[i];
		m=i;
		}
	}
 printf("%d",m+1);
}

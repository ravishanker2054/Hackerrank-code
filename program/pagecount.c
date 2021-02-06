#include<stdio.h>
int main()
{
	int a,b,n,p;
	scanf("%d",&n);
	scanf("%d",&p);
    a=p/2;
    b=n/2-p/2;
    if(a>b)
    printf("%d",b);
    else
    printf("%d",a);
}

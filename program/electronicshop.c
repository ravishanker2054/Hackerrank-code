#include<stdio.h>
int main()
{
    int b,m,n,i,j,d=0,e;
    scanf("%d %d %d",&b,&n,&m);
    int a[n],c[m];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<m;j++)
    scanf("%d",&c[j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            e=a[i]+c[j];
            if(e>d && e<=b)
            d=e;
        }
    }
    
    if(e<=b)
    printf("%d",d);
    else
    printf("-1");
}

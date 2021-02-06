#include<stdio.h>
int main()
{
    long long int i,n,c=0;
    scanf("%lli",&n);
    long long int a[n];
    for(i=0;i<=n-1;i++)
    {
    scanf("%lli",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     c=c+a[i];
     
   }
    printf("%lli",c);

}

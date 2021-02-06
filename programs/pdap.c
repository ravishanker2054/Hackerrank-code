#include<stdio.h>
long long int MinNum( long long int a[],int n);
long long int MaxNum( long long int a[],int n);
long long int MinSum( long long int a[], long long int max,int n);
long long int MaxSum( long long int a[], long long int min,int n);

int main()
{
  int n=5,i;
    //scanf("%d",&n);
   long long int a[5];
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
   long long int min=MinNum(a,n);
   long long int max=MaxNum(a,n);
   long long int mins=MinSum(a,max,n);
     long long int maxs=MaxSum(a,min,n);
    printf("%lld %lld",mins,maxs);
}
 long long int MinNum( long long int a[],int n)
{
    int i; long long int l=a[0];
    for(i=1;i<n;i++)
    if(l>a[i])l=a[i];
    return l;
}
 long long int MaxNum( long long int a[], int n)
{
     long long int i,l=a[0];
    for(i=0;i<n;i++)
    if(l<a[i])l=a[i];
    return l;
}
long long int MinSum( long long int a[], long long int max,int n)
{
     long long int c=0,d=0; int i;
    for(i=0;i<n;i++)
    {
        if(a[i]!=max)c=c+a[i];
        else if(a[i]=max)d++;
    }
    return c+(max*(d-1));
}
long long int MaxSum( long long int a[], long long int min,int n)
{
    int i;long long int c=0,d=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=min)c=c+a[i];
        else if(a[i]=min)d++;
    }
    return c+(min*(d-1));
}


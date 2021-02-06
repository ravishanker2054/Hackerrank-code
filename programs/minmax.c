#include<stdio.h>
int main()
{
    int n=5,i;
    //scanf("%d",&n);
    int a[5];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int min=MinNum(a,n);
    int max=MaxNum(a,n);
    int mins=MinSum(a,max,n);
    int maxs=MaxSum(a,min,n);
    printf("%d %d",mins,maxs);
}
int MinNum(int a[],int n)
{
    int i;int l=a[0];
    for(i=1;i<n;i++)
    if(l>a[i])l=a[i];
    return l;
}
int MaxNum(int a[],int n)
{
    int i,l=a[0];
    for(i=0;i<n;i++)
    if(l<a[i])l=a[i];
    return l;
}
int MinSum(int a[],int max,int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=max)c=c+a[i];
    }
    return c;
}
int MaxSum(int a[],int min,int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=min)c=c+a[i];
    }
    return c;
}


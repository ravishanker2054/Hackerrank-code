#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int tall=max(a,n);
	printf("%d",tall);
	return 0;
}
int max(int a[],int n)
{
	int i,l=a[0];
	for(i=1;i<n;i++)
	if(l<a[i])l=a[i];
	return l;
}
//int value(int a[],int n,int tallest)
//{
  //  int i,c=0,l;
    //for(i=0;i<n;i++)
    //{
      //  if(a[i]=tallest)
        //c++;
    //}
   // return c;




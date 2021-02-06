#include<stdio.h>
int findGCD(int brr[], int n);
int findlcm(int arr[], int m);
int gcd(int a, int b);
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int findGCD(int brr[], int n) 
{ 
    int r = brr[0],j; 
    for (j = 1; j < n; j++) 
        r=gcd(brr[j],r); 
  
    return r; 
} 
int findlcm(int arr[], int m) 
{ 
    int ans = arr[0] ,i; 
    for (i = 1; i < m; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 
int main() 
{ 
   int m,n,i,j,c=0,k,l,h;
   scanf("%d %d",&m,&n);
   int arr[m],brr[n];
   for(i=0;i<m;i++)
   scanf("%d",&arr[i]);
   for(j=0;j<n;j++)
   scanf("%d",&brr[j]);
   l=findlcm(arr,m); 
   h=findGCD(brr,n);
   for(k=l;k<=h;k=k+l)
   {
   	if((h%k==0)&& (k%l==0))
   	c++;
   }
   printf("%d",c);
   return 0; 
} 



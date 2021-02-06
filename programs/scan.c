#include<stdio.h>
#include<conio.h>
void main()
{

int i,j,k,n,m,a[n],b[m];
int findlcm1(a[n],n);
scanf("%d",&n);
for(i=0;i<=n;i++)
scanf("%d",&a[i]);
//scanf("%d",&m);
//for(j=0;j<=n;j++)
//4scanf("%d",&b[j]);
int f=findlcm1(a,n);
printf("%d",ans);
}
 int findlcm1(int a[n], int n) 
{ 
    // Initialize result 
    int ans = a[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (int k = 1; k < n; k++) 
        ans = (((arr[k] * ans)) / 
                (gcd(arr[k], ans))); 
  
    return ans; 
 
}

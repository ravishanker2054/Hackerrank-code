#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   	int m=lcm(a,n);
   	printf("%d",m); 
	     }
   int lcm(int a[], int n) 
{ 
    // Initialize result 
    int ans = a[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    
	for(int i=1;i<n;i++) 
       {
		 ans = (((a[i] * ans))  
                (gcd(a[i], ans))); 
}

    return ans; 
}

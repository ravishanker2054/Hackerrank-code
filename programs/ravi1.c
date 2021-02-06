#include<stdio.h>
int main()
{
    float p=0,z=0,s=0;
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       if(a[i]>0)
       {
           p++;
       } 
       else if(a[i]==0)
       {
           z++;
       }
       else(a[i]<0)
        s++;
   }
       printf("%f%f%f",(float)p/n,(float)z/n,(float)s/n);
   
}


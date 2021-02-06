#include<stdio.h>
int main()
{
    float p;
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       if(i>0)
       {
           i++;
       } 
        p=(i/n);
       printf("%f",p);
       
       else if(i==0)
       {
           i++;
       }p=(i/n);
       printf("%f",p;
       else(i<0)
       {
           i++;
       }
       printf("%f",float(i/n));
   }
}

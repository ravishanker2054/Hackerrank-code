#include<stdio.h>
#include<string.h>
int main()
{
   int n,i,c=0,d,u,p,x=0,y=0;
   scanf("%d",&n);
   char a[n]; 
   scanf("%s",&a);
   for(i=0;i<n;i++)
   {
   	if(a[i]=='U')
	   {
	   x++;
	   u=i+1;
       }
	   
   	else
   	{
   	y--;
   	d=i+1;
    }
    p=x+y;
   	if(p==0 && u>d)c++;
   }
   printf("%d",c); 
}

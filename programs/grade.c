#include<stdio.h>
int main()
{  
  	int num,rem,h,i,n;
  	scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++)
    {
    scanf("%d",&a[i]);
}
 	n=a[i];
   if(n<38)
   printf("%d",n);
   rem=n%5;
   h=n+(5-rem);
   while(h>=40)
   {
   	if((h-n)<3)
   	printf("%d",h);
   	else
   	printf("%d",n);
   }
}

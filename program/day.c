#include<stdio.h>
#include<stdlib.h>
int main()
{
	int y,i;
	scanf("%d",&y);
	while(y<1918)
	{
	if((y%4)==0)
	{
	   printf("12.09.%d",y);
	   exit(0);
	}
	else
	{
	  printf("13.09.%d",y);	
	  exit(0);
	}
    }
	if(y==1918)
	{
	printf("26.09.%d",y);
	exit(0);
    }
    while(y>1918)
    {
	if((y%4)==0 && (y%100)!=0 || (y%400)==0)
	{
	   printf("12.09.%d",y);
	   exit(0);	
	}
	else
	{
		 printf("13.09.%d",y);
		 exit(0);
	}
    }
}


#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,c=0,p,x=0,y=0;
	scanf("%d",&n);
	char a[n];
	scanf("%s",&a);
    for(j=0;j<n;j++)
	  	{
	  		if(a[j]=='u')
	  		{
	  			x++;
			  }
			  if(a[j]=='d')
	  		{
	  			y--;
			  }
			  p=x+y;
			  if(p==0)
			  c++;
			  
		  }
	
	
	printf("%d",c);
	
	}

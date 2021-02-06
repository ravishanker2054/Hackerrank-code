#include<stdio.h>
#include<string.h>
int main(){
	int n,i=0,j,m=0,c=0;
	scanf("%d",&n);
	char a[n];
	scanf("%s",&a);
    for(j=0;j<n;j++)
	  	{
	  		if(a[j]=='u')
	  			c++;
			  else
	  		c--;
			  
			  if(c==0 && a[j]=='u')
			  i++;
			  if(c==0 && a[j]=='d')
			  m++;
			  
		  }
	
	
	printf("%d %d",i,m);
	
	}

#include<stdio.h>
int main(){
	int n,i,v,f=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&v);
	for(i=0;i<n;i++){
	  if(v==a[i])
	  f++;
	}
	if(f==1)
	printf("found");
	else
	printf("not found");
	}
	
